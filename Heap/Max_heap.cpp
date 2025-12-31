#include <iostream>
using namespace std;

class MaxHeap {
public:
    int arr[100];
    int size;

    MaxHeap() {
        size = 0;
    }

    int parent(int i) { return (i - 1) / 2; }
    int left(int i) { return 2 * i + 1; }
    int right(int i) { return 2 * i + 2; }

    void insert(int val) {
        size++;
        int i = size - 1;
        arr[i] = val;

        // Up-heapify
        while (i != 0 && arr[parent(i)] < arr[i]) {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    void heapify(int i) {
        int l = left(i);
        int r = right(i);
        int largest = i;

        if (l < size && arr[l] > arr[largest]) largest = l;
        if (r < size && arr[r] > arr[largest]) largest = r;

        if (largest != i) {
            swap(arr[i], arr[largest]);
            heapify(largest);
        }
    }

    int deleteMax() {
        if (size == 0) return -1;

        int root = arr[0];
        arr[0] = arr[size - 1];
        size--;

        heapify(0);

        return root;
    }

    void buildHeap(int a[], int n) {
        size = n;
        for (int i = 0; i < n; i++)
            arr[i] = a[i];

        // Build heap (bottom-up)
        for (int i = (size / 2) - 1; i >= 0; i--)
            heapify(i);
    }

    void display() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    MaxHeap h;

    h.insert(10);
    h.insert(4);
    h.insert(15);
    h.insert(20);
    h.insert(0);
    h.insert(30);

    h.display();

    cout << "Deleted max: " << h.deleteMax() << endl;
    h.display();

    return 0;
}
