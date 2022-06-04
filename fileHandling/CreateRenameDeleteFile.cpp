#include<iostream>
using namespace std;
int main(){

    static const char* originalFile = "Original.txt";
    static const char* editedFile = "Edited.txt";

    FILE *fh = fopen(originalFile,"w");
    fclose(fh);
    
    rename(originalFile,editedFile);
    remove(editedFile);
    return 0;
}