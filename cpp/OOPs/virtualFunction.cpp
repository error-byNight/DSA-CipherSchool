#include<iostream>
using namespace std;

//A Virtual Function is a member function in base class that we expet to redefine in derived class

class Base{
    public:
    virtual void print(){
    cout<<"From Base" <<endl;
    }
};

class Derieved : public Base{
    public:
    void print() override{
        cout<<"From Derieved"<<endl;
    }
};

int main(){
    Derieved d1;
    Base *b = &d1;
    b->print();

    return 0;    
}