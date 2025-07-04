#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout<<"Front : "<<q.front()<<endl;
    cout<<"Rear : "<<q.back()<<endl;
    cout<<"Size : "<<q.size()<<endl;
    cout<<"Empty : "<<q.empty()<<endl;
}