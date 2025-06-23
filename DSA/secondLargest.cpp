#include<iostream>
#include<climits>
using namespace std;

//Find Second Largest Number in Array
int secondLargest(int arr[], int size){
    int firstMax = INT_MIN; int secondMax = INT_MIN;

    for (int i=0; i < size; i++){
        if (arr[i]> firstMax){
            secondMax = firstMax;
            firstMax=arr[i];

        }
        else if(arr[i] > secondMax && arr[i] !=  firstMax){
            secondMax = arr[i];
        }
    }
    return secondMax;
}
int main(){
    int arr[] = {1,2,3};

cout<<secondLargest(arr,3);
}