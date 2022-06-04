#include <iostream>
#include <memory> // memory header file needed to be included for smart pointers
using namespace std;

class User{
public:
    User(){cout<<"User Created!!\n";}
    ~User(){cout<<"User Destroyed!!\n";}
    void testFunc(){cout<<"I am a test function\n";}
};

int main(){
    //{} - empty scope

    {
        // The only difference between the shared and the unique pointer is the copy constructor.
        // The memory allocated for the shared pointer will be deallocated only if all the shared pointer will runs out of scope so, no worries about memory leaks
       // shared_ptr<User> tim (new User()); This is a bad usuage it will leads to memory wastage in the heap because of the new keyword
       shared_ptr<User> tim = make_shared<User>();
       shared_ptr<User> timmy = tim; // This is possible in the shared pointer .
       weak_ptr<User> weakTim = tim; // This is a weak pointer
       // In the shared pointer there is a counting variable which will count and keep track of the number of shared  pointers
       // for a particular memory block and these weak pointers will not be counted by them and the memory will be deallocated even
       //when the weak pointer is not out of scope
    }
    cout<<"Outside the code"<<endl;
}