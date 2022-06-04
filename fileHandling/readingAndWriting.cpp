#include<iostream>
using namespace std;
constexpr int maxbuffer = 1024;
int main(){
    const char* fileName = "myFile.txt";
    const char* info = "lorem ipsum dolar sit amet";

    // FILE* fh = fopen(fileName,"w");
    // for (int i = 0; i < 50; i++)
    // {
    //     fputs(info,fh);
    // }
    // fclose(fh);

    char buf[maxbuffer];
    FILE *fh = fopen(fileName,"r");
    while ( fgets(buf,maxbuffer,fh) )
    {
      fputs(buf,stdout);
    }
    fclose(fh);

    return 0;
}