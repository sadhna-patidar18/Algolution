#include<iostream>
using namespace std;
int count_Inversions(int arr[], int n) {
    int count=0;
    for(int i=0; i <n-1; i++) {
        for(int j=i + 1; j<n; j++) {
            if(arr[i] > arr[j]) {
                count++;
            }
        }
    }
    return count;
}
int main() {
    int arr[] = {7, 2, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = count_Inversions(arr, n);
    cout << "Number of inversions: "<<result<<endl;
    return 0;
}
