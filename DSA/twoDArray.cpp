#include<iostream>
using namespace std;
bool isPresent(int arr[][4], int key, int row, int col){
    for(int i=0; i<row;i++){
        for(int j=0; j<col;j++){
            if(key== arr[i][j])return true;
        }
    }
    return false;
}
int main(){
    int arr[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<isPresent(arr, 3,3,4);
}