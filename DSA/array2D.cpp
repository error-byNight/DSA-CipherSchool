#include <iostream>
using namespace std;

int main(){
//creating a 2d array
int arr[3][4];

//int arr[3][4]= {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
//int arr[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
// for (int row= 0; row<3; row++){
//     for(int col=0; col<4; col++){
//         cin >> arr[row][col];
//     }
//     }
for (int col=0;col<4;col++){
    for(int row=0;row<3;row++){
        cin>>arr[row][col];
    }
}

    //print
    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}