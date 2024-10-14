#include "bits/stdc++.h"
using namespace std;
void removedup(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(int k=j;k<n;k++){
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
            
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    removedup(a,n);
    return 0;
}