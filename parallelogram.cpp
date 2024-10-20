#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    int cols = 5;

    // Outer loop for each row
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        for (int j = 0; j < cols; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
