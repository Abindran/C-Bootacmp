#include <iostream>
using namespace std;
int main(){
	// Ternary operator is : condition?"True block":"False block";
	int rating;
	cout<<"Enter a rating between 1-5: ";
	cin>>rating;
	if (rating==1){
		cout<<"\nYour rating is poor";
	}else if (rating == 2){
		cout<<"\nYour rating is good";
	}else if (rating == 3){
		cout<<"\nYour rating is fair";
	}else if (rating == 4){
		cout<<"\nYour rating is Very good";
	}else if (rating == 5){
		cout<<"\nYour rating is excellent";
	}else{
		cout<<"\nEnter a value between 1-5 !!!!";
	}
	return 0;
}
