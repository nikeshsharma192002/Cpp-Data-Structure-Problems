#include<iostream>
using namespace std;

bool LSB(int n,int pos){
    return(n & (n & (1<<pos)))!=0;
}
int main(){
    int n,pos;
    cin>>n>>pos;
    cout<<LSB(n,pos);

    
    return 0;
}