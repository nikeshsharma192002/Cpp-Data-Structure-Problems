#include<iostream>
using namespace std;
 
int fab(int n){
int t1=0;
int t2=1;
int nextTerm;
for(int i=1;i<=n;i++){
    cout<<t1<<endl;
    nextTerm=t1+t2;
    t1=t2;
    t2=nextTerm;

}
}
int main(){
    int n;
    cout<<"enter a value: ";
    cin>>n;
    fab(n);
    return 0;
}