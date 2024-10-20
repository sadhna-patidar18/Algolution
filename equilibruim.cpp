#include<iostream>
using namespace std;
int equilibrium(int *arr,int n) {
    for(int i=0;i<n;i++) {
          int left=0;
        for(int j=0;j<i;j++) {
            left=left+arr[j];
        }
          int right=0;
        for(int j=i+1;j<n;j++){
            right=right+arr[j];
        }
        if(left==right) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[]={-7,1,5,2,-4,3,0};
    int n=sizeof arr/sizeof arr[0];
    cout<<equilibrium(arr,n);
}