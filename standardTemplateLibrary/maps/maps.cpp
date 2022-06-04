#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string, string> languages;
    languages["py"] = "python";
    languages["cpp"] = "c++";
    languages["js"] = "javascript";

    languages.insert(make_pair("pl","pearl"));

    for(auto &val: languages){
        cout<< val.first << " : "<<val.second<<endl;
    }

    cout<<languages.at("py");
    

}