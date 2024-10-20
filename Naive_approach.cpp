#include <iostream>
using namespace std;
bool Pair(int *arr, int n, int X) {
    for(int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i] + arr[j] == X) {
                return true;
            }
        }
    }
    return false; 
}
int main() {
    int arr[] = {1, 2, 4, 5, 7, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int X = 9;
    if(Pair(arr,n, X)) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
    return 0;
}
