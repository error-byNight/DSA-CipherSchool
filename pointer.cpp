#include<iostream>
using namespace std;

// int main()
// {
//     int a = 5;
//     int *ptr = &a;

//     cout <<&a<<endl;  //address of a
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl; //derefrencing
// }

int main(){
    int b = 5;
    int *ptr = &b;
    int **ptr1 = &ptr;
    cout<<b<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr1<<endl;

}