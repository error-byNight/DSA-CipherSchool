#include<iostream>
using namespace std;

void wavePrint(int arr[][4], int row, int col){
    for(int c = 0; c < col; c++){
        if(c % 2 == 0){
            for(int r = 0; r < row; r++){
                cout << arr[r][c] << " ";
            }
        }
        else{
            for(int r = row - 1; r >= 0; r--){
                cout << arr[r][c] << " ";
            }
        }
    }
}

int main(){
    int arr[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
    wavePrint(arr, 3, 4);
}