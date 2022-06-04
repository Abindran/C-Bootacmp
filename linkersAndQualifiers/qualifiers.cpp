/* There are two types of qualifiers.They are
        1. modification qualifier
        2. Life duration qualifier
    
    1. Modification qualifier
            a.) const
            b.) volatile
                    - uses in multi threaded processes
            c.) mutable
    2. Life duration qualifier
            a.) static
            b.) register
                    - 'suggestion' to compiler to store this info in register 
                    - used in hardware level code
            c.) extern
                    - store into external library
*/
# include <iostream>
using namespace std;

int lifeUp(){
    /*When a variable is declared as static, space for it gets allocated for the lifetime of the program. 
    Even if the function is called multiple times, space for the static variable is allocated only once 
    and the value of variable in the previous call gets carried through the next function call. */

    static int life = 3; // by including the static keyword this variable enters into a global state
    return life = life + 1;
}
int main(){
    int life = 3;
    cout<<"Your starting game life is "<<life<<endl;
    life = lifeUp();
    printf("Your updated game life is %d\n",life); // without static life = 4
    life = lifeUp();
    printf("Your updated game life is %d\n",life); // without static life = 4
    return 0;
}
