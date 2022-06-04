// Move semantic is used for memory optimization
#include<iostream>
#include<string>
#include<conio.h> // it is only here for system("cls") and not  for move semantic
using namespace std;
void swap(int& a,int& b){
    // int temp = a;  a is not empty
    // a = b; b is not empty
    // b = temp;
    // In the above code, copy pasting operation is taking place
    // but in the below code moving operation is taking place
    int temp = move(a); // a will become empty
    a = move(b); // b will become empty
    b = move(temp); 

}
string printMe(){
    return "I am print";
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b for swapping: ";
    cin>>a>>b;
    system("cls");
    cout<<"The value of a (before swaping) is "<<a<<endl;
    cout<<"The value of b (before swaping) is "<<b<<endl;
    swap(a,b);
    cout<<"\nThe value of a (after swaping) is "<<a<<endl;
    cout<<"The value of b (after swaping) is "<<b<<endl;


    //string s = printMe();  This will occupy more memory because the return of printMe() will occupy some memory in the stack and assigning will occupy some more memory

    string&& s = printMe(); //This is also move semantics
    // This will occupy less memory than above program because assigning wil not occupy a separate memory rather it will 
    // reference to the return of printMe()'s memory.  

    return 0;
}