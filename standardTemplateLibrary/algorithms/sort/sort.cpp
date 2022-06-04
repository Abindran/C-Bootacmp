#include<iostream>
#include<algorithm>
using namespace std;

// The sort() function here implies generic programming because you can pass any data type into the sort() function
int main(){
    int number[6] = {4,3,6,2,7,9};
    cout<<"Unsorted values: "<<endl;
    for(int i:number){
        cout<<i<<" ";
    }

   sort(number,number+6); // It might be optimised and might not be optimised
   //sort_heap(number,number+6); This might give undesired result
    cout<<"\nSorted values: "<<endl;
    for(int i:number){
        cout<<i<<" ";
    }
    return 0;
}