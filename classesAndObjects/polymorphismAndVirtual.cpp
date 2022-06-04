// The word polymorphism means having many forms. 
// In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. 
#include<iostream>
using namespace std;

// In the below classes the method intro represents polymorphism
class One{
public:
    virtual void intro(){cout<<"I am one\n";}  // The virtual keyword solves the pointer ambiguity problem
    // On a side note, the virtual function that doesn't have any definition(empty definition) is called pure virtual function
};

class Two : public One{
public:
    void intro(){cout<<"I am Two\n";}
}; 

class Three : public One{
public:
    void intro(){cout<<"I am Three\n";}
};

int main(){
    // One a;
    // Two b;
    // Three c;
    // a.intro();
    // b.intro();
    // c.intro();

    One* a;
    Two b;
    Three c;

    a=&b;
    a->intro(); // "I am One" will be printed if we don't use the virtual keyword 

    a=&c;
    a->intro(); // "I am One" will be printed if we don't use the virtual keyword 

    return 0;
}