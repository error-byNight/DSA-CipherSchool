#include<iostream>
using namespace std;

class Student {
public:
int age;
string name;
int rollNo;
Student(int age, string name,int rollNo) { // Constructor with parameter
    this->age = age;
    this->name = name;
    this->rollNo = rollNo;
}
}; 

int main(){
    Student s1(20, "John", 101); // Creating object with constructor
   // Student s2(22, "Doe", 102); // Creating another object with constructor
    cout<<s1.age<<" "<<s1.name<<" "<<s1.rollNo<<endl;
   // cout<<s2.age<<" "<<s2.name<<" "<<s2.rollNo<<endl;


    return 0;
}