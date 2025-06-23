#include<iostream>
using namespace std;
//Check if array is Sorted or  Not
bool sotedOrNot(int arr[], int size){
    for(int i=0;i<size;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[]={3,5,7,8};
    cout<<sotedOrNot(arr,5)<<endl;
}