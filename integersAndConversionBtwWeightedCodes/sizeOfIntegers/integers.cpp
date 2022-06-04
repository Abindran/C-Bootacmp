#include <iostream>
#include <cstdint>
using namespace std;

int main(){
	
	// 1 byte = 8 bits
	// sizeOf() function returns byte
	// the size of integers changes from system to system so it affects the portability of the program
	cout<<"The size of short int is "<<sizeof(short int) * 8 <<" bits"<<endl;
	cout<<"The size of int is "<<sizeof(int) * 8 <<" bits"<<endl;
	cout<<"The size of long int is "<<sizeof(long int) * 8 <<" bits"<<endl;
	cout<<"The size of long long int is "<<sizeof(long long int) * 8 <<" bits"<<endl;
	
	// the changes in the size of an integer can be handled by the library <cstdint>
	cout<<"The fixed size of an integer here will be 16 bits the proof is "<<sizeof(int16_t)*8<<bits;
	
	return 0;
}
