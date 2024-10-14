#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}

int main(){
    int x=19;
    int y=20;

    int sum=add(x,y);

    cout<<"addtion of two no:"<<sum;
    return 0;
    
}