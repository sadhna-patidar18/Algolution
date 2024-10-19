#include<iostream>
using namespace std;
void Merge_sort(int *arr1,int m,int *arr2,int n,int *arr3){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            if(arr3[k++]=arr2[j++]);
            }
        }
        while(i<n){
            arr3[k++]=arr1[i++];
        }
        while(j<n){
            arr3[k++]=arr2[j++];
        }
    }

int main() {
    int arr1[]={2,3,3,4,6};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={1,2,2,7,8};
    int n=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[m+n];
    Merge_sort(arr1,m,arr2,n,arr3);
    cout<<"Merged array:";
    for(int i=0;i<m+n;i++){
        cout<<arr3[i]<<" ";
    }
}