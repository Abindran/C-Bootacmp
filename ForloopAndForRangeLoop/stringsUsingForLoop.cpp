#include<iostream>
using namespace std;
int main(){
    char my_string[] = "abindran";
    //Every string ends with a null character
    char my_name[] = {'a','b','i','n','d','r','a','n',0}; // 0 or '\0'

    printf("The name is %s\n",my_string); //The character array doesn't need a loop for a full traversal

    cout<<"The break part 1\n";

    for(int i=0;my_name[i]!= 0 ;i++){ //simply my_name[i] can be used because the string terminates with a null character 
        cout<<"The character is "<<my_name[i]<<endl;
    }

    cout<<"The break part 2\n"; 
    // Traversing the character array using character pointer
    for (char* cp = my_name; *cp; cp++)
    {
        cout<<"The character is "<<*cp<<endl;
    }
    
    cout<<"The break part 3\n"; 
    // Traversing  the character array using for range/for each loop
    // For each loop can be used to traverse a group of strings separated by a "\0" charater or space eg. string:Baby pink
    for(char i:my_name){
        cout<<"The character is "<<i<<endl;
    }

    return 0;
}