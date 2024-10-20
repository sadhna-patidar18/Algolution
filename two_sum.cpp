#include<iostream>
using namespace std;
int main() {
    int n=6;
    int x=9;
    int arr[6]={1, 1, 3, 5, 7, 11};
    int left=0;
    int right=n-1;
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==x){
            cout<<"yes";
            return 0;
        }
        else if(sum<x){
            left++;
        }
        else{
            right--;
        }
    }
    cout<<"No pair found";
}