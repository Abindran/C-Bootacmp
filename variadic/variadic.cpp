// Variadic(...) is a function that accepts a infinite number of argumnets
// In this program we will use template and recursion to implement veriadic
#include <iostream>
using namespace std;

template <typename T>
void func(T t){ // This function is used as an exit condition for the below recursive function by function overloading
    cout<<"One func: "<<t<<endl;
}

template <typename T,typename... Args>
void func(T t,Args... args){
    cout<<"Two func: "<<t<<endl;
    func(args...);
}

int main(){
    func(1);
    func(1,2,3,"Abindran",2.13); // infinite number of parameters
    return 0;
}