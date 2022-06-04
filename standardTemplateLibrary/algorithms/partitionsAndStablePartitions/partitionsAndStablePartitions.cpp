#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> inty = {1,2,3,4,5,6,7,8,9,10};
    for(int i:inty){
        cout<<i<<" ";
    }
    cout<<"\n";

    partition(begin(inty),inty.end(),[](int x){return x%2 == 0;});
    //stable_partition(begin(inty),inty.end(),[](int x){return x%2 == 0;}); // tries to keep the order

    for(int i:inty){
        cout<<i<<" ";
    }
}