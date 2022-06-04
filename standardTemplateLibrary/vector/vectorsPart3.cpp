#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v_array;
    for (int i = 1; i <= 10; i++)
    {
        v_array.push_back(i);
    }
    for (auto i = v_array.begin(); i < v_array.end(); i++)
    {
        cout<<*i<<" ";
    }

    v_array.emplace(v_array.begin(),0);
    cout<<endl;
    for (auto i = v_array.begin(); i < v_array.end(); i++)
    {
        cout<<*i<<" ";
    }
    v_array.emplace_back(11);
    cout<<endl;
    for (auto i = v_array.begin(); i < v_array.end(); i++)
    {
        cout<<*i<<" ";
    }
    v_array.insert(v_array.begin(),99);
    cout<<endl;
    for (auto i = v_array.begin(); i < v_array.end(); i++)
    {
        cout<<*i<<" ";
    }
}