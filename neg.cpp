#include<iostream>
using namespace std;
int main() {
    int arr[]={-2,-3,-4,-1,-2};
    int n=5;
    int c=0;
    for(int i=0;i<n;i++) {
        if(arr[i]<0){
            c++;
        }
}
    cout<<c;
}