// The difference between list and the forward list is
// List - bidirectional sequential access. It is implemented using doubly linked list
// Forward list - Unidirectional sequential access. It is implemented using singly linked list
#include <iostream>
#include <forward_list>
using namespace std;
int main(){
    forward_list<int> mynums;

    mynums.push_front(10); // because it a singly linked list i.e no push back
    mynums.push_front(22);
    mynums.push_front(15);
    mynums.push_front(50);
    mynums.push_front(60);

    cout<<mynums.front()<<endl;

    mynums.remove(10);

    mynums.pop_front();

    for (auto &&i : mynums)
    {
        cout<<i<<" ";
    }
    
    

}