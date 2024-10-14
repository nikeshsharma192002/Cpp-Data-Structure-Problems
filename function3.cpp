#include<iostream>
using namespace std;

int sumofNatural(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    
    return sum;
}
int main(){
    int n;
    cin>>n;
    int natural=sumofNatural(n);
    cout<<"sum of n natural number:"<<natural;
    return 0;
}