#include<iostream>
using namespace std;
int main() {
    cout<<"n:";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Take n input:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"maximum element is:"<<max;
}