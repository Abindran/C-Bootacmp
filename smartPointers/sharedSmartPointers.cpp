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
    {
        // The only difference between the shared and the unique pointer is the copy constructor.
        // The memory allocated for the shared pointer will be deallocated only if all the shared pointer will runs out of scope so, no worries about memory leaks
       // shared_ptr<User> tim (new User()); This is a bad usuage it will leads to memory wastage in the heap because of the new keyword
       shared_ptr<User> tim = make_shared<User>();

       shared_ptr<User> timmy = tim; // This is possible in the shared pointer .
    }
    cout<<"Outside the code"<<endl;
}