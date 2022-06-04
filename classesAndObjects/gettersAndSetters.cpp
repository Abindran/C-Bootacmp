#include<iostream>
#include<string>
using namespace std;

class User{

    int _secret = 22; // using underscore before a private variable is a good practise

    public:
    string name = "default";
    void classMessage(){cout<<"Class is great, "<<name<<endl;}
    
    // setters and the getters are used to modify and access the private variables. 
    // These are not mandatory but a good practiss
    // The below setter and the getter are basic examples 
    void setSecret(const int& newSecret){_secret = newSecret;}
    int getSecret(){return _secret;}
    
};

int main(){

    User Abindran;
    Abindran.name = "Abindran";
    Abindran.classMessage();
    Abindran.setSecret(100);
    cout<<"The Secret is "<<Abindran.getSecret();
    return 0;
}