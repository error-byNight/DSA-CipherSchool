#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int start, int mid, int end) {
    vector<int> temp;
    int i = start, j = mid + 1;

    // Merge the two sorted halves
    while(i <= mid && j <= end) {
        if(arr[i] < arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }
    while(i <= mid) temp.push_back(arr[i++]);
    while(j <= end) temp.push_back(arr[j++]);

    // Copy back to original array
    for(int k = 0; k < temp.size(); ++k) {
        arr[start + k] = temp[k];
    }
}

void mergeSort(vector<int> &arr, int start, int end){
    if(start >= end) return;
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 6, 3};
    mergeSort(arr, 0, arr.size() - 1);
    cout << "Sorted array: ";
    for(int x : arr) cout << x << " ";
    cout << endl;
    return 0;
}
