#include<iostream>
using namespace std;
//---------------------------
//Multilevel

class A{
    public:
    int a = 5;

};

class B : public A{


};

class C : public B{


};
int main(){


    B b1;
    b1.a;

    C c1;
    c1.a;

    return 0;
}
