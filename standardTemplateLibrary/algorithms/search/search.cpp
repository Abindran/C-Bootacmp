#include<iostream>
#include<algorithm>
using namespace std;
// you can only perform the search operation on a sorted array because the search in STL is a binary search
int main(){
    int numbers[6] = {2,4,1,9,5,8} ;
    sort(numbers,numbers+6); // sorting is important for searching beacuse it is a binary search

    int key;
    cout<<"Enter the element that need to be searched: ";
    cin>>key;
    if(binary_search(numbers,numbers+6,key)){ // It is a binary search the array need to be sorted before searching
        cout<<"NUMBER IS FOUND!!";
    }else{
        cout<<"NUMBER IS NOT FOUND!!";
    }

    return 0;
}