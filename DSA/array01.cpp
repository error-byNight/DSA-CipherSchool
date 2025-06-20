#include<iostream>
using namespace std;
//Find maximum element in an array
int findMax(int arr[], int size){
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[]={1,2,3,4,5};
    findMax(arr, 5);
    cout << "Maximum element in the array: " << findMax(arr, 5) << endl;
}