#include <vector>
#include <iostream>
using namespace std;


void insert(vector<int> &vec, int i) {
    int key = vec[i];
    int j = i - 1;

    while (j >= 0 && vec[j] > key) {
        vec[j + 1] = vec[j];
        j--;
    }
    vec[j + 1] = key;
}

void insertion_sort(vector<int> &vec, int i, int size) {
    if (i == size) return;

    insert(vec, i);
    insertion_sort(vec, i + 1, size);
}

int main() {
    vector<int> arr = {5, 2, 4, 6, 1, 3};
    insertion_sort(arr, 1, arr.size());

    for (int num : arr) cout << num << " ";
    return 0;
}
