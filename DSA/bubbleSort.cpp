#include<iostream>
using namespace std;

//Bubble sorrt
void bubbleSort(int arr[], int n){
    for (int i = 0; i<n-1;i++){
        bool swapped = false;
        for(int j =0;j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}
int main(){
    int arr[5]= {9,8,2,5,1};
    bubbleSort(arr,5);
    for (int i=0; i<5;i++){
    cout<<arr[i];
    }
return 0;

}