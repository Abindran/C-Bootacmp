#include<iostream>
using namespace std;

template <typename T>
T addme(T a,T b){
    return a+b;
}


int main(){
    int v1 = 6;
    int v2 = 7;

    float v3 = 1.2;
    float v4 = 3.1;

    cout<<addme(v3,v4)<<endl;
    return 0;
}