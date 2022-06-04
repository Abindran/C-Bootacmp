#include<iostream>
using namespace std;
int main(){
	int myNum[] = {1,2,3,4,5,6,7,8,9,10};
	//Iterating the array using the for loop
	for(int i=0;i<10;i++){
		cout<<myNum[i]<<endl;
	}
	cout<<"Take a break !!!\n";
	//Iterating the array using the for each loop / for range loop
	//for(range declaration : range expression){
	//		statement;
	//	}
	for(int i:myNum){
		cout<<i<<endl;
	}
}
