#include<iostream>
#include<string>
using namespace std;
int main(){

    //[]{}(); - This is an example of lambda function which doesn't return anything
    //[](){return a;}; - This is an example of lambda function which  returns a value
    []{cout<<"Hello Everyone!!!\n";}();

    //[](){return 100};

    auto sum = [](auto a, auto b){return a + b;};

    cout<<"Sum of 2 and 5 is "<<sum(2,5)<<endl;
    string a = "Bat";
    string b = "man";
    cout<<"Concatination of \"Bat\" and \"man\" is "<<sum(a,b)<<endl;

    return 0;
}