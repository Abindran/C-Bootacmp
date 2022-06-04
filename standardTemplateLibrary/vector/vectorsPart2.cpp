#include<iostream>
#include<string>
#include<typeinfo>
#include<vector> // vector need to be included at the last
using namespace std;
int main(){
    vector <int> nums;
    vector<string> heros {"batman","superman","wonderwoman","robin"};

    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);
    nums.push_back(2);

    for (int i = 0; i < 5; i++)
    {
        nums.push_back(i);
    }

    cout<< nums.size() << endl <<nums.capacity()<< endl<<nums.max_size()<<endl<<nums.empty()<<endl;

    for(auto i = nums.begin(); i != nums.end();++i){
            cout<<*i<<" ";
    }
}