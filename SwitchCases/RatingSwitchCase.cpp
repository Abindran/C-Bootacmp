#include <iostream>
using namespace std;
int main(){
	int rating;
	cout<<"Enter the rating: ";
	cin>>rating;
	switch(rating){
		case 1:
			puts("Your Rating is 1");
			break;
		case 2:
			puts("Your Rating is 2");
			break;
		case 3:
			puts("Your Rating is 3");
			break;			
		case 4:
			puts("Your Rating is 4");
			break;
		case 5:
			puts("Your Rating is 5");
			break;
		default:
			puts("We accept rating only between 1 and 5 !!!");
			break;
	}
}
