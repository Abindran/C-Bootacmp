//#include <iostream>
//using namespace std;
//int main(){
//	char color[20];
//	cout<<"What is your favorite color ? \n";
//	cin>>color;
//	cout<<color<<" is also my favorite color";
//	return 0;
//}

#include <iostream>
#include <string>
using namespace std;
int main(){
	string myColor;
	cout<<"Enter your favorite color: \n";
	getline(cin,myColor);//To input the entire line including the space 
	cout<<"Hey! "<<myColor<<" is my favorite color too";
}
