#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void heapify(int arr[], int n, int i){
        int largest = i;
        int left = 2*i;
        int right = 2*i+1;

        if(left <= n && arr[largest] < arr[left]){
            largest = left;
        }
        if(right <= n && arr[largest] < arr[right]){
            largest = right;
        }

        if(largest != i){
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }
    void print(){
        for (int i = 0; i<= size; i++){
            cout<< arr[i] <<" ";
        }
    }
};

int main(){
    heap h;

    int arr[] = {-1, 7, 8, 10, 15, 6};
    int n = 5;

    for(int i = n/2; i > 0; i--){
        h.heapify(arr, n,i);
    }
    for(int i = 0; i <= n; i++){
        cout <<arr[i]<<" ";
    }
}