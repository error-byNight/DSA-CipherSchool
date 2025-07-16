#include<iostream>
using namespace std;

class Student{
    //Create private data members -> name id
    private:
    string name;
    int id;

    public:
    //Initialize them
    Student (string n, int i){
        id = i;
        name = n;
    }
    
    //Create a getter to get id
    string getName(){
        return name;
    }
    int getId(){
        return id;
    }

    //create a setter to set name
    void setName(string newName){
        name = newName;
    }
};

int main(){
    Student s1("sonu", 1);
    //Print the original name and id
    cout << "Before : " << s1.getName() << ", ID: " << s1.getId() << endl;
    s1.setName("monu");
    //Print the new name and id
    cout << "After : " << s1.getName() << ", ID: " << s1.getId() << endl;
    return 0;
}
