#include<iostream>
using namespace std;
int main(){
    string s="djfghahghajkhsdkgh";
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]-=32;
        }
    }
    cout<<s<<endl;
    string s1="DSBHEGFHBCDHFCBHGIH";
    for(int i=0;i<s1.size();i++){
        if(s1[i]>='A'&&s1[i]<='Z'){
            s1[i]+=32;
        }
    }
    cout<<s1<<endl;
    return 0;
}