#include<iostream>
using namespace std;

class MyFloat{
    float _fl;
public:
    MyFloat(): _fl(0.1){}
    void getValue(){cout<<_fl<<endl;}
    void operator()(float f){_fl+=f;}
};

int main(){
    MyFloat floaty;
    floaty.getValue();

    floaty(1.2);
    floaty.getValue();
    return 0;
}