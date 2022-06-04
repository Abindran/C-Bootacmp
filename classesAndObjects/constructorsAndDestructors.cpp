// checkout this link for some rules : https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three
#include <iostream>
#include <string>
using namespace std;
class Phone{
    string _name = "";
    string _os = "";
    int _price = 0;

    public:
        Phone(); // default constructor
        Phone(const string& name,const string& os,const int& price); // parameterized constructor
        Phone(const Phone&); // copy constructor
        string getOs(){return _os;} //getter
        ~Phone();//Destructor
};

Phone :: Phone() : _name(),_os("DefaultAndroid"),_price() { // This constructor uses initializer list because it need to be executed before the default constructor
    puts("Default constructor is executed");
} 

Phone :: Phone(const string& name,const string& os,const int& price) : _name(name),_os(os),_price(price) {
    puts("Parameterized constructor is executed");
}

Phone :: Phone(const Phone& value) : _name("very advanced - "+value._name),_os("very advanced - "+value._os),_price(value._price) {
    puts("Copy constructor is executed");
}
Phone :: ~Phone(){
    printf("The destructor of %s is executed !!!\n",_name.c_str());
}

int main(){
    Phone samsungM20;
    cout<<samsungM20.getOs()<<endl;

    Phone OneplusNord("OPNord","Oxygen",1000);
    cout<<OneplusNord.getOs()<<endl;

    Phone Oneplus8 = OneplusNord;
    cout<<Oneplus8.getOs()<<endl;


    return 0;
}