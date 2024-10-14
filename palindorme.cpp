#include<iostream>
#include<algorithm>
using namespace std;
string palindrome(string a){
    string b=a;
    reverse(b.begin(),b.end());
    if(b==a){
        return "Yes";
    }
    else{
        return "No";
    }
}
int main(){
    string a;
    cin>>a;
    cout<<palindrome(a);
    return 0;

}