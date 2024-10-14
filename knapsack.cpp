#include<iostream>
using namespace std;

int knapsack(int value[],int wt[],int n,int w){
    if(n==0||w==0){
        return 0;
    }
    if(wt[n-1]>w){
        return knapsack(value,wt,n-1,w);
    }
    return max(knapsack(value,wt,n-1,w-wt[n-1])+value[n-1],knapsack(value,wt,n-1,w));
}
int main(){
    int wt[]={70,20,10,50,30};
    int value[]={50000,2000,45000,100000,10000};
    int w=80;
    cout<<knapsack(value,wt,4,w);
    return 0;
}