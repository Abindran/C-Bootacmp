#include <iostream>
#include <string>
using namespace std;
int main(){
	string firstName,lastName;
	cout<<"Enter your first name: ";
	getline(cin,firstName);
	cout<<"Enter your last name: ";
	getline(cin,lastName);
	cout<<"Your first name is "<<firstName<<"\nYour last name is "<<lastName;
	return 0;
}
