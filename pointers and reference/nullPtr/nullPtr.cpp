#include<iostream>
//#define NULL 0    - this is a macro the NULL is replaced with 0
using namespace std;

void printVal(int a){
    cout<<"The value of the integer is "<<a;
}
void printVal(double a){
    cout<<"The value of the double is "<<a;
}
void printVal(int* a){
    cout<<"The value of the pointer is "<<a;
}
int main(){
    //printVal(NULL); for this to work the macro need to be written
    printVal(nullptr); //nullPtr points exactly to NULL
    return 0;
}