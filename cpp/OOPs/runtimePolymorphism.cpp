#include<iostream>
using namespace std;

class Base{
    public:
    void print(){
        cout<<"From Base " <<endl;
    }
};

class Child : public Base{
    public:
    void print(){
        cout <<"From Child" <<endl;
    }
};

int main(){
    Child c1, c2;
    c1.print();  // It will take his own method rather than base class method

    c2.Base::print(); //using scope resolution operator

    return 0;
}