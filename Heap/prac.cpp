#include<bits/stdc++.h>
using namespace std;


class MaxHeap {
public:
    int* arr;
    int size;
    int totalsize;

    MaxHeap (int s) {
        totalsize = s;
        arr = new int[totalsize];
        size = 0;
    } 

    int parent(int i) { return (i-1)/2; }
    int leftchild (int i)  {return 2*i+1; }
    int rightchild (int i)  {return 2*i+2; }


    void heapifyDown (int i) {
        int largest = parent(i);
        int left = leftchild (i);
        int right = rightchild (i);

        if (left < size && arr[largest] < arr[left])
            largest = left;
        if (right < size && arr[largest] < arr[right])
            largest = right;
        
        if (largest != i) {
            swap (arr[largest],arr[i]);
            heapifyDown (largest);
        }
    }

    void heapifyUp (int i) {
        while (i > 0 && arr[parent(i)] < arr[i])
        {
            swap (arr[parent(i)],arr[i]);
            i = parent(i);
        }

    }
    void insert (int val) {
        if (size >= totalsize) return;

        arr[size] = val;
        cout << "Value " << val << " inserted into heap: ";
        heapifyDown (size);
        size++;
    }

    void deleteMax() {
        if (totalsize <= 0) return;

        cout << arr[0] << " is deleted.\n";
        arr[0] = arr[size];
        size--;

        heapifyDown(0);
    }
};

int main()
{

   return 0;
}