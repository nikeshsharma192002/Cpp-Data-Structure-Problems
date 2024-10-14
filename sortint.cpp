#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    string s="6735812875";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
    return 0;
}