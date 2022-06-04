// memory leaks is a brief topic there are books specifically to deal with memory leaks in c++
#include<iostream>
using namespace std;
int main(){

    // when you use new keyword always remember to use delete keyword to avoid memory leak
    int* intArrayPtr;
    intArrayPtr = new int [10]; // memory allocation of 10 integers using the integer pointer
    //intArrayPtr = new(nothrow) int [10]; by using nothrow keyword the compiler doesn't throw any exception 
    //and the program will crash so bad code !!! instread of no throw try using "try catch block" to handle exception.
    cout<<"Memory space allocated\n";
    //delete  intArrayPtr; This only deletes the first element of the array
    delete [] intArrayPtr;//This deletes the entire array
    cout<<"Memory space deallocated";
    return 0;
}