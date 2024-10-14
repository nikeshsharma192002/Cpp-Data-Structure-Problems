#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;

    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
            
        }
        else if(arr[mid]<key){
            s=mid+1;
        }

    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the value of key:"<<endl;
    cin>>key;
    int pos = binarySearch(arr, n, key);     
    if (pos != 1)  
    {  
        cout << " Element is found at position " << (pos + 1)<< endl;  
    }  
    else  
    {  
        cout << " Element is not found in the array" << endl;  
    }  
    return 0;
}