#include <iostream>
using namespace std;

void printSum(int arr[][4]){
    cout<<"Printing sum "<<endl;
    for(int i=0; i<3;i++){
        int sum=0;
        for(int col=0;col<4;col++){
            sum +=arr[i][col];
            
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
    printSum(arr);
}