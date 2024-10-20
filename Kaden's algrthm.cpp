// Kadens algorithm
#include<iostream>
#include<climits>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int currSum=0, maxSum=INT_MIN;
    for(int i=0;i<n;i++) {
      currSum+=arr[i];
      maxSum=max(currSum,maxSum);
      if(currSum<0){
          currSum=0;
      }
        
    }
    cout<<maxSum<<" ";
}