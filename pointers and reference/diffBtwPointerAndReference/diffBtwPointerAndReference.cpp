#include <iostream>
using namespace std;
int main(){
	int num = 100;
	
	//int* numPtr = &num;
	int* numPtr;
	numPtr = &num;
	
	cout<<"The value of num is "<<num<<endl;
	cout<<"The value of num pointer(address of num) is "<<numPtr<<endl;
	
	int& numReference = num; //Reference need to be declared and initialized at the same line
	numReference = 420;
	
	cout<<"The value of num is "<<num<<endl;
	cout<<"The value of num pointer(address of num) is "<<numPtr<<endl;
	
}
