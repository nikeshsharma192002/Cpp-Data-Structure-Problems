#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s="874359871";
    
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
    return 0;
}