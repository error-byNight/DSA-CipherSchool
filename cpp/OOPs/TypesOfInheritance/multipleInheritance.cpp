#include<iostream>
using namespace std;
//---------------------------

//------------------------
//Multiple Inheritance
class A{
    public:
    void print(){
        cout<<"From A"<<endl;

    }
};

class B{
    public:
    void print(){
        cout<<"From B: " <<endl;
    }
};

class C: public A, public B{

};

int main(){
    

    C c1;
    
    

    return 0;
}