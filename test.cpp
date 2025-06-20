#include <iostream>
using namespace std;

//int ->    4 byte -> 5
//float ->  4 byte -> 5.7
//double -> 8 byte -> 5.77777
// char ->  1 byte -> 'a'
// bool ->  1 byte -> true/false

int main()

{
    //int age = 10 ; // if value not given then it will give garbage value (random)
    //cout <<age << endl;
    int num ;
    cout << "Enter a number:";
    cin >> num;
    cout << "Number is :" << num;
}