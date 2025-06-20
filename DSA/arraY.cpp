#include<iostream>
using namespace std;

void sumOfArray(int arr[]){
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    cout << "Sum of array: " << sum << endl;
}
int main(){
    // int arr[5] = {10, 20, 30, 40};
    // cout<<arr[4]<<endl;
    // int arr[5];
    //  cout<<"Enter 5 numbers: "<<endl;
    //  for (int i = 0; i < 5; i++) {
    //      cin >> arr[i];
    //  }
    //      cout<<"Numbers are: "<<endl;
    //      for (int i = 0; i < 5; i++) {
    //          cout << arr[i] << " ";
    //      }
     int arr[5] = {10, 20, 30, 40, 50};
    //  cout<<"Enter 5 numbers: "<<endl;
    //     for (int i = 0; i < 5; i++) {
    //         cin >> arr[i];
    //     }
    //  //using for loop calculate sum of array
    //     int sum = 0;
    //         for (int i = 0; i < 5; i++) {
    //             sum += arr[i];
    //         }
    //         cout << "Sum of array : " << sum << endl;

    sumOfArray(arr);
    
}