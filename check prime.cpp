#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag=false;


    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"not a prime\n";
            return 0;

        }
        
    }
    if(flag==true){
        
        return 1;
    }
    cout<<"is a prime"<<n<<endl;
    return 0;
}