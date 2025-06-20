#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    int n;
    cout << "Enter total no. of integer: ";
    cin >> n;

    cout << "Enter integer n: ";
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }

    cout << "Reversed integer: ";
    for(int i = v1.size() - 1; i >= 0; i--) {
        cout << v1[i] << " ";
    }
    
    return 0;
}