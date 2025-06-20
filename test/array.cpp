#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
//Adding in vector
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    v1.push_back(60);
    
//Access
    //cout<<v1[0];
    //cout<<v1.at(1);
    // for(int i=0;i<v1.size();i++){
    // cout<<v1.at(i)<<endl;
    // }

    // for(int i :v1){
    //     cout<<i<<endl;  //foreach loop
    // }
    for(int i = v1.size() - 1; i >= 0; i--) {
        cout << v1[i] << " "; // Reverse order
    }

}