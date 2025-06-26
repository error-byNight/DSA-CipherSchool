#include <iostream>
using namespace std;



// int factorial(int n){
//     //base case
//     if(n==0) return 1;
//     return n* factorial(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     int ans = factorial(n);
//     cout<<ans<<endl;
// }


// Recursive function to print numbers from 1 to n
void printCounting(int n) {
    if(n == 0) return;         // base case
    printCounting(n - 1);      // recursive call
    cout << n << " ";          // print after recursion to get 1 to n
}

int main() {
    printCounting(10);
    cout << endl;
}