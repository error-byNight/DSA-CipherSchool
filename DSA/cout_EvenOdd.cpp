#include<iostream>
using namespace std;

//Count even and odd numbers //1523
int countEvenOdd(int arr[], int size){
    int evenCount =0;
    int oddCount =0;
    for (int i =0; i<size; i++){
        if (arr[i] % 2 ==0){
            evenCount++;
        } else {
            oddCount++;
        }
    }
    cout<<"Even : " <<evenCount<<endl;
    cout<<"Odd : " <<oddCount<<endl;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    countEvenOdd(arr, 5);
    return 0;
}