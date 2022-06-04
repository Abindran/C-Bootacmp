#include<iostream>
using namespace std;

int getTwo(){
    return 2;
}

void interesting(){
    cout<<"I am Interesting\n";
}

int main(){

    int WhatIGot = getTwo();

    cout<<WhatIGot<<endl;

    // The functional pointer's type should be same as the function's return type
    void (*functionalPointer)() = interesting; // Paranthesis is must because it is a functional pointer

    functionalPointer(); 
    // OR
    (*functionalPointer)();

    return 0;
}