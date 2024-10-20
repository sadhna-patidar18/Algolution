#include <iostream>
using namespace std;

int main() {
    int rows = 5; 
    
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j <= rows; j++) {
            cout << j;
        }
        for (int k = 1; k < i; k++) {
            cout << rows;
        }
        cout << endl;
    }

    return 0;
}
