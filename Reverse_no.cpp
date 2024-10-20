#include<iostream>
using namespace std;
int Reverse(int *arr,int n,int i,int j){
     if(i>=j){
            return -1;
        }
        else{
            swap(arr[i],arr[j]);
        }
        int ans=Reverse(arr,n,i+1,j-1);
        return ans;
}
int main() 
{
    int arr[]={1,2,3,4,5,6,4};
    int n=sizeof arr/sizeof arr[0];
    int j=n-1;
    int i=0;
    Reverse(arr,n,i,j);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
}