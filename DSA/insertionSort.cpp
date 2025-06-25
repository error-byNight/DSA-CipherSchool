#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 1; i<n; i++){
        int j=i-1;
        int key = arr[i];
        while(j >= 0 && arr[j] > key){
            arr[j +1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

}


int main(){
    int arr[5]= {9,8,2,5,1};
    insertionSort(arr,5);
    for (int i=0; i<5;i++){
    cout<<arr[i];
    }
return 0;

}