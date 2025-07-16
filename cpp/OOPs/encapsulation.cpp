/**
 * Encapsulation - 
 * 1. It is a process of wrapping similar code in one place
 * 2. We can not access any function from the class directly.
 * 3. Increase in security of data
 * 4. It helps control the modification of out data members.
 * 
 */
#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    int getLength(){
        return length;
    }

    void setLength(int val){
        length = val;
    }

};

int main(){
    Rectangle r1(5,10);

    cout<<"Before : " << r1.getLength()<<endl;
    r1.setLength(10);

    cout<<"After : "<<r1.getLength()<<endl;
}