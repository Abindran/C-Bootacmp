#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;
int main(){
    deque<int> mynums;

    mynums.push_back(10);
    mynums.push_front(20);
    mynums.push_front(30);
    mynums.push_front(50);
    mynums.push_back(30);

    //cout<< mynums.size()<<endl<<mynums.max_size()<<endl;

    cout<<mynums.at(2)<<endl; // at() gives exception nicely if any error occurs 

    mynums.pop_back();
    mynums.pop_front();

    //iteration
    for (auto &&i : mynums)
    {
        cout<<i<<" ";
    }
    
}