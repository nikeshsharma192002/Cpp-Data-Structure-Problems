#include<iostream>
using namespace std;
int main(){
    string s1="nincompoop";
    cout<<s1.size()<<endl;//s1.length
    for(int i=0;i<s1.size();i++)
    cout<<s1[i]<<endl;
    string s=s1.substr(6,4);
    cout<<s<<endl;
    s1.find("com");
    cout<<s1.find("com")<<endl;
    s1.erase(3,3);
    cout<<s1<<endl;
    string str="nincompoop";
    str.insert(3,"lol");
    cout<<str<<endl;
    
    return 0;
}