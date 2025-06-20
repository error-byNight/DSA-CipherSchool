#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;
    int ID;

    int getAge() {
        return age;
    }
    string getName() {
        return name;
    }

    
    void getNames(){
        cout<<"Name is : "<<name<<endl;
    }
    int getID(){
        return ID;
    }

};
int main(){
    Student s1;
    Student s2;
    

    s1.name ="Person1";
    s1.age = 20;
    s2.name ="Person2";
    s2.age = 22;

    cout<<"Name of Student One is : " <<s1.name<<endl;
    cout<<"Age of Student One is : "<<s1.age<<endl;
    cout<<"Name of Student Two is : " <<s2.name<<endl;
    cout<<"Age of Student Two is : " <<s2.age<<endl;

    cout<<s1.getName()<<endl;
    cout<<s1.getAge()<<endl;
    cout<<s1.getID()<<endl;
    cout<<s2.getName()<<endl;
    cout<<s2.getAge()<<endl;
    cout<<s2.getID()<<endl;
}