#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
   cout<<"The largest number : "<<arr[0]<<endl;
   cout<<"The second largest no: "<<arr[1]<<endl;
   cout<<"The smallest no : "<<arr[n-1]<<endl;
   cout<<"The second smallest no : "<<arr[n-2]<<endl;
    return 0;
}