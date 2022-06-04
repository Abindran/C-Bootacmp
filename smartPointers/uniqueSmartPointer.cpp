// Unique pointer frees up the memory as soon as the scope ends
// unique pointer cannot be copied i.e copy constructor is locked
// memory leaks can be handled by the smart pointer here it is unique pointer
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
         //unique_ptr<User> sam (new User()); non favorite way for deveoper because of the new keyword
         unique_ptr<User> sam = make_unique<User>();
         sam->testFunc();

        // unique_ptr<User> sammy = sam;  This cannot be used because the copy constructor is disabled. This will result in error
    }
    cout<<"Outside the code"<<endl;
}