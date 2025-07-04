#include <iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    int arr[1000];
    int top;

    Stack(){
        top = -1;
    }
    void push(int x){
        if(top==999){
            cout<<"Stack Overflow"<<endl;
            return;
        }

        //top+=;
    arr[++top]= x;
    }

    void pop(){
        if(top== -1){
        top--;
    }
}
};

int main(){
    myStack st;
    
}