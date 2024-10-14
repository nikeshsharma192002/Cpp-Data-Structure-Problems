#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int N=n+1;
    int total=(N)*(N+1)/2;
    for(int i=0;i<n;i++){
        total-=a[i];
    }
    cout<<total<<endl;
    return 0;
}