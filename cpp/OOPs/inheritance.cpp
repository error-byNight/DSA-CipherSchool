/**
 * Inheritance
 * 1. Definition of INHERITANCE
inheritance-> in this a class (called the child or derived) acquires properties and behaviour from another class 
(called parent or base class)
 */

 #include<iostream>
 using namespace std;

 class Animal{
    public:
    void eat(){
        cout<<"Eating"<<endl;
    }
 };

 class Dog : public Animal{
    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
 };

 class Lion : public Animal{
    public:
    void roar(){
        cout<<"Roaring"<<endl;
    }
 };
 
 int main(){
    Dog dog1;
    dog1.eat();
    Animal a1;
    a1.eat();

    Lion lion1;
    lion1.roar();
    //a1.roar();

 }