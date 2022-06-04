#include<iostream>
#include<string>
using namespace std;
class Man{
    string _name;
    int _age; // _age is a private variable of Man and it cannot be accesed by superman class or the spiderman class

    friend class Superman; // by declaring the Superman class as the friend of the base class Man, the private member of the Man class 
    // can be accessed by the friend class Superman

    Man(){} 
protected:
    Man(const string& name,const int& age) : _name(name),_age(age) {}
    void run(){cout<<"Man can runs";}
public:
    void sayName() const;
};

void Man:: sayName() const{
    cout<<"My name is "<<_name<<endl;
}

//superman
class Superman : public Man{
    bool flight;
public:
    Superman(const string& name) : Man(name,26) {}
    void run(){cout<<"I can run at light speed and the age is "<<_age<<endl;} //accessing the private member(_age) of the base class
    // because superman is the friend of the base class Man
};

//spiderman
class Spiderman : public Man{
    bool webbing;
public:
    Spiderman(const string& name) : Man(name,19) {}
    void run(){cout<<"I can run at superhuman speed\n";}
};
int main(){
    Superman clark("kent");
    clark.sayName();
    clark.run();

    Spiderman peter("parker");
    peter.sayName();
    peter.run();
    return 0;
}