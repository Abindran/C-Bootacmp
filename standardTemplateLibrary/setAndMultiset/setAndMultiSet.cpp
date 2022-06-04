// The difference between the seta nd the multiset is that
// set - doesn't allows duplicate
// multiset - allows duplicate
#include<iostream>
#include<set>
using namespace std;

class User{
public:
    string name;
    int score;
    bool operator >(const User& u)const{return score<u.score;}
    bool operator <(const User& u)const{return score>u.score;}
};

int main(){

    multiset<int,greater<>> myset = {12,13,14,15,14,12}; // decending order if greater<> is used

    myset.insert(2);
    myset.insert(4);
    myset.insert(3);
    myset.insert(4);
    myset.insert(6);

    for (auto i = myset.begin(); i != myset.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    for (auto &&i : myset)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    set<User,greater<>> myUser = {{"sam",200},{"tim",22},{"sam",200}}; // greater<>/less<> is mandatory for user defined data types

    for (auto &&i : myUser)
    {
        cout<<i.name<<" ";
    }
    cout<<endl;
    
}