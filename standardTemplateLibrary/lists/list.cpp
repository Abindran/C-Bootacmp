// The difference between vector and the list is that list doesn't store its element in contigueous location
// It is used as doubly linked list easy forward and reverse traversal
// insertion and deletion is easy compared to traversal
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
int main(){
    list<int> mylist;

    for (int i = 3; i <= 10; i++)
    {
       mylist.push_back(i);
    }

    cout<<mylist.front()<<endl;
    cout<<mylist.back()<<endl;

    mylist.pop_back();
    mylist.reverse(); // It is ok to use reverse() for the list containing the integer datatype 
    // Be caution about the list
    
    for(auto i:mylist){
        cout<<i<<" ";
    }
    cout<<endl;
    mylist.sort(); // It is ok to use sort() for the list containing the integer datatype
        for(auto i:mylist){
        cout<<i<<" ";
    }
    
}