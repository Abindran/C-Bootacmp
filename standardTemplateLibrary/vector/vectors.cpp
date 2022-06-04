#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Corners{
    float a,b,c,d;
};

// operator over writing
ostream& operator<<(ostream& stream, const Corners& corner){
        stream <<" "<< corner.a <<" "<<corner.b<<" "<<corner.c<<" "<<corner.d;
        return stream;
}

int main(){
    vector<int> inty;

    // push_back() - insert data into the vector (array list)
    inty.push_back(1);
    inty.push_back(2);
    inty.push_back(3);

    for(auto i = inty.begin(); i< inty.end(); i++){  // i here is a reference
            cout<<*i<<endl;// i is a pointer reference so we are dereferencing 
    }

    vector<Corners> corners;
    corners.push_back({1,2,3,4}); // set of values is passed to the structure
    corners.push_back({5,6,7,8}); // set of values is passed to the structure

    for(int i = 0;i<corners.size();i++){
            cout<<corners[i]<<endl;
    }

    return 0;

}