#include<iostream>
using namespace std;
int Slight_window(int *arr,int n,int k){
    if(n<k){
        cout<<"invalid !!!";
        return -1;
    }
    int maxSum=0;
    for(int i=0;i<k;i++){
        maxSum+=arr[i];
    }
    int windowSum = maxSum;
    for(int i=k;i<n;i++){
        windowSum+=arr[i]-arr[i-k];
        maxSum = max(windowSum,maxSum);
    }
    return maxSum;
    
}
int main() {
    int arr[]={1,4,2,10,23,3,1,0,20};
    int n=9;
    int k=4;
    cout<<"Consecutive elements sum:"<<Slight_window(arr,n,k);
    
}