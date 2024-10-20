#include<iostream>
using namespace std;
void find_unique(int *arr,int n){
    cout<<"Unique elements in array:"<<endl;
    for(int i=0;i<n;i++){
        bool isunique=true;
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                isunique=false;
                break;
            }
        }
        if(isunique){
            cout<<arr[i]<<" ";
        }
    }
    
}
int main() {
    int arr[]={1,2,3,2,4,5,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    find_unique(arr,n);
}