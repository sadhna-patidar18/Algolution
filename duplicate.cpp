#include <iostream>
using namespace std;

int countDuplicates(int arr[], int size) {
    int count = 0;  
    bool visited[size] = {false};  

    for (int i = 0; i < size; i++) {
        if (visited[i])  
            continue;

        bool isDuplicate = false;  

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {  
                visited[j] = true;   
                isDuplicate = true;
            }
        }

        if (isDuplicate) {
            count++;  
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int totalDuplicates = countDuplicates(arr, size);

    cout << "Total number of duplicate elements: " << totalDuplicates << endl;

    return 0;
}
