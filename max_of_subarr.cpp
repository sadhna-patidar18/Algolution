#include<iostream>
using namespace std;
void max_of_subarr(int *arr,int n,int k){
    for(int i=0;i<=n-k;i++) {
        int maxElem=arr[i];
        for(int j=1;j<k;j++) {
            if(arr[i+j]>maxElem){
                maxElem=arr[i+j];
            }
        }
        cout<<maxElem<<" ";
    }
    cout<<endl;
}
int main() {
    int arr[]={1,2,3,1,4,5};
    int n=6;
    int k=3;
    max_of_subarr(arr,n,k);
}