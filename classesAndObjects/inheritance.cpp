#include<iostream>
#include<string>
using namespace std;
class Man{
    string _name;
    int _age;
    Man(){} // no one can access the default constructor or default constructor is disabled 
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
    void run(){cout<<"I can run at light speed\n";}
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