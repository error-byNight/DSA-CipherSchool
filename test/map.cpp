#include<iostream>
#include<map>
using namespace std;


int main(){
    map<int, string> m1;

    m1[001] = "Sonu";
    m1[99] = "Harsh";

    for(auto i :m1){
        cout<<i.first << " " << i.second <<endl;
    }

}