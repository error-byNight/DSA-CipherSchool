#include<iostream>
using namespace std;

void selectioSort(int arr[], int size){
    for (int i=0; i<size-1; i++){
        int min = i;
        for (int j = i+1;j<size; j++){
            if (arr[j] < arr[min]) min = j;
        }
        swap(arr[min], arr[i]);

    }


}

int main(){
    int arr[5]= {5,2,8,1,3};
    selectioSort(arr,5);
    for (int i=0; i<5;i++){
    cout<<arr[i];
    }
return 0;

}