#include"bits/stdc++.h"
using namespace std;

int findFeasible(int booards[],int n,int limit){
    int sum=0,painters=1;
    for(int i=0;i<n;i++){
        sum+=booards[i];
        if(sum>limit){
            sum=booards[i];
            painters++;
        }
    }
    return painters;
}


int paintersPartition(int booards[],int n,int m){

    int totalLength=0,k=0;
    for(int i=0;i<n;i++){
        k=max(k,booards[i]);
        totalLength+=booards[i];
    }
    int low=k,high=totalLength;
    while(low<high){
        int mid=(low+high)/2;  
        int painters=findFeasible(booards,n,mid);
        if(painters<=m){
            high=mid;
        }  
        else{
            low=mid+1;
        }
}
return low;
}
int main(){
    int arr[]={10,20,30,40};
    int n=4;
    int m=2;

    cout<<"Minimum time to paint boards: "<< paintersPartition(arr,n,m)<<endl;

    return 0;
}