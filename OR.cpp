#include <iostream>
using namespace std;

int findTotalOR(int arr[], int n) {
    int totalOR = 0; 
    for (int i = 0; i < n; i++) {
        int currOR = 0; 
        for (int j = i; j < n; j++) {
            currOR |= arr[j]; 
            totalOR |= currOR; 
        }
    }

    return totalOR;
}

int main() {
    int arr[] = {1, 4, 6}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findTotalOR(arr, n);
    cout << "The OR of all subarrays is: " << result << endl;

    return 0;
}
