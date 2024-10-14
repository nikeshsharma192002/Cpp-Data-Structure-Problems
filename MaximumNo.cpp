#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"maximum Number: "<<a<<endl;
        }
        else{
            cout<<"maximum Number: "<<c<<endl;
        }
    }
    else{
    if(b>c){
        cout<<"maximum Number: "<<b<<endl;
    }
    else{

        cout<<"maximum Number: "<<c<<endl;
    }
    }
    return 0;
}
