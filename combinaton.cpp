#include<iostream>
using namespace std;

int fact(int n){
    int fatorial=1;
    for(int i=2;i<=n;i++){
        fatorial*=i;
    }
    return fatorial;
}
int main(){
    int n;
    cin>>n;
    int r;
    cin>>r;

    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
    return 0;
}