#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;

    char op;
    cout<<"Enter the operation"<<endl;
    cin>>op;

    switch(op){
        case '<':
        cout<<a + b;
        break;
        case '-':
        cout<<a - b;
        break;
        case '/':
        cout<<a / b;
        break;
        default:
        cout<<"Invalid";

    }
    return 0;

}