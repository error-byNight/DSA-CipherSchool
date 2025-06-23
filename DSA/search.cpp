#include<iostream>
using namespace std;
 
//linear search
bool linearSearch(int arr[], int size, int key){
    for (int i = 0; i<size; i++){
        if (arr[i] == key){
        return true;
    }
}
    return false;
}

int main(){
    int arr[5]={4,7,3,8,1};
    int key= 8;
    cout<<linearSearch(arr, 5,key);

}