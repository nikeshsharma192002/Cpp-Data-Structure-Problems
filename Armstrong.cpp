#include<math.h>
#include<iostream>
using namespace std;
int main(){
       int n,sum=0,m;    
    cout<<"Enter a number: ";    
    cin>>n;
    int originalNum=n;
while(originalNum!=0)    
{    
    m=originalNum%10;    
    sum=sum+pow(m,3);    
    originalNum=originalNum/10;    
} 
if(sum==n){
    cout<<n<<"Armstrong";
}   
else{
    cout<<n<<"Not Armstrong";
}
    return 0;


}
