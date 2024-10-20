#include<iostream>
using namespace std;

int main() {
    int arr[5]; 
    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    bool isPalindrome = true;
    for (int i = 0; i < 5 / 2; i++) {
        if (arr[i] != arr[5 - i - 1]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        cout << "The order of numbers is a palindrome." << endl;
    } else {
        cout << "The order of numbers is not a palindrome." << endl;
    }
    return 0;
}
