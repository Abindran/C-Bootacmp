#include <iostream>
#include <string>
using namespace std;

class User{
    int secret = 10;

    public:
        string name = "default";
        void classMessage(){cout<<"Class is great, "<<name<<endl;}
};

int main(){

    User Sam;
    Sam.name = "Sam";
    Sam.classMessage();
    User Abindran;
    Abindran.name = "Abindran";
    Abindran.classMessage();

    return 0;
}