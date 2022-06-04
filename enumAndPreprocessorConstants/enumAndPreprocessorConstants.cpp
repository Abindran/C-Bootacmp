// enums are used as an alternative to preprocessor constants
#include <iostream>
using namespace std;
#define PI 3.14 // preprocessor constant

enum MSOffice : int8_t{ // : int8_t is usually used in enum to save space
    BOLD = 5,           /* enum will auto increment its element based on the previous element*/
    ITALICS,
    UNDERLINE,
    CROSSED
};

int main(){

    int attributes = ITALICS;
    cout<<attributes<<endl;
    return 0;
}
