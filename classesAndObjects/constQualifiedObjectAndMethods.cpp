// The const object can only access the const method and it cannot access the non-const method
// The non-const object can access both the const and the non-const method
#include<iostream>
#include<string>
using namespace std;

class User{

    int _secret = 22; 

    public:
    string name = "default";
    void classMessage();
    
    void setSecret(const int& newSecret){_secret = newSecret;} // This is a non-const method
    int getSecret()const {return _secret;} // This is a const method
    
};

void User::classMessage(){cout<<"Class is great, "<<name<<endl;}

int main(){

    User Abindran; // This is a non const object
    Abindran.name = "Abindran";
    Abindran.classMessage();
    Abindran.setSecret(100);
    cout<<"The Secret is "<<Abindran.getSecret()<<endl;

    const User kamal; // This is a const object
    //kamal.setSecret(); // Accessing the non-const method using the const object will result in error
    cout<<"Accessing the const method using the const object: "<<kamal.getSecret()<<endl; 
    return 0;
}