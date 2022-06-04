// macros literally means copy pasting
#include<iostream>
#define NULL 0 //The 0 is copied and pasted in the place of NULL in the below program
#define END return 0 // return 0 is replaced with end
#define endMessage cout << "The program is ended\n"
#define LCOINT int32_t  // Good use of macros
#define console_log(a) cout << a << endl
using namespace std;
int main(){
    LCOINT a =NULL;
    cout<<"The demo of macro: "<<a<<endl;
    console_log(a);
    endMessage;
    END;
}
// not only #define is a macro there are more macros like #ifdef,ifndef etc...