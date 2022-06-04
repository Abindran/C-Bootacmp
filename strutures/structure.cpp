#include <iostream>
using namespace std;

// Actually the name of the array holds the pointer to the first element of the arry, so char string[] = char* string;
struct User{
    const int uid;
    const char* name; // The pointer is the constant not the value it holds just the address is the constant
    const char* email;
    int course_count;
};

int main(){

    User Abindran = {006,"Abindran","abindranr@gmail.com",10};
    User Kamal = {007,"Kamal","kamal@gmail.com",10};

    cout<<Kamal.email<<endl;
    Kamal.course_count = 12;
    cout<<Kamal.course_count<<endl;
    Kamal.email = "Kamale007@gmail.com"; // only the pointer(address) is constant not the value
    cout<<Kamal.email<<endl;
    //Kamal.uid = 10; This will result in error

    // Creating a pointer/reference to kamal
    User* k = &Kamal;
    //k.email = "kamal@gmail.com";  This will result in error because 'k' is a pointer reference
    k->course_count = 15;
    return 0;
}