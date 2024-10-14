#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int array[100];
    for(int i=0;i<n;++i){
        cout<<"Enter the element:";
        cin>>array[i];
    }
    
    for(int i=1;i<n;i++){


        if(array[0]<array[i]){
            array[0]=array[i];
        }
     }
    cout<<"largest element:"<<array[0];
    

    return 0;
}