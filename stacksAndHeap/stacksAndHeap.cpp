#include<iostream>
using namespace std;

struct User{
    const int uid;
    int age;

    // structure constructor
    User(): uid(001),age(19){}

};
int main(){

    //stack;
    int score = 100;
    User mike;

    //heap
    int* heapScore = new int;
    *heapScore = 100;

    User* nike = new User(); // () is optional

    delete heapScore;
    delete nike;


    return 0;
}