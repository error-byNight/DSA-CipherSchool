#include<iostream>
using namespace std;
 
/**
 * The term "Polymorphism" is combination of "Poly" + "morph" which means many forms;
 * 
 * eg. single person is behaving differently  according to the situation
 * 
 * Polymorphism -> Compile time -> Function overloading and operator overloading
 * 
 * [Compile time - the overloaded functions are invoked  by matching the type and number of arguments. 
 * this is available at compile time and therefore compiler selects the appropriate function at compile time. It is also 
 * known as static binding or early binding]
 * 
 * 
 * -------------------------------------------------------------------------------------------
 * Runtime -> Virtual Functions
 * This type of polymorphism is achieved by Function overriding, i
 * t is also called late binding and dynamic polymorphism.
 * The Function call is resolved at runtime.
 */

 int add(int a, int b){
    return a+b;
 }
 int add(int a, int b, int c){
    return a+b+c;
 }

 int main(){
    add(2,3);

 }