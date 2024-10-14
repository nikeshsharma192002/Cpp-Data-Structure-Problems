#include <iostream>
#include<climits>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]>maxno){
            maxno=a[i];
            
        }
        if(a[i]<minno){
            minno=a[i];
            
        }
    }
    cout<<maxno<<" "<<minno<<endl;

    return 0;
}