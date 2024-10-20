#include<iostream>
using namespace std;
int main() {
    int n, target;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<"elements in the array:"<< endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"Enter the number to search:";
    cin>>target;
    int index = -1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        cout<<"The number "<<target <<" is found at index:"<<index<<endl;
    } else {
        cout<<"The number "<<target <<" is not found in the array"<<endl;
    }
    return 0;
}
