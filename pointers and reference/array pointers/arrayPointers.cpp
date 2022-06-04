#include <iostream>
using namespace std;

int main(){
	
	//Basic declaration and initialization and traversal of array
	int integer_array[4] = {1,2,3,4};
	cout<<integer_array[0]<<endl;
	cout<<integer_array<<endl; //Prints the address of the first element in the array
	
	
	//array's pointer concept
	int another_array[4];
	another_array[0]=9;
	another_array[1]=19;
	cout<<another_array[0]<<endl;
	
	*another_array = 209; //checkout the line 9
	cout<<another_array[0]<<endl;
	
	cout<<another_array[1]<<endl;
	
	int* ap = another_array;
	ap++;
	*ap = 100;
	cout<<another_array[1]<<endl;

	return 0;
}
