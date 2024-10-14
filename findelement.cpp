#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int Target;
    cin>>Target;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    bool found = false;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==Target){
                found = true;
            }
        }
    }
    
    if(found){
        cout<<"Element is Found";
    }
    else{
        cout<<"Not found";
    }
    return 0;

}