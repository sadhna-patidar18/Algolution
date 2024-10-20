#include <iostream>
#include <vector>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    int n = nums.size();
    int result;


    for (int i = 0; i < k; ++i) {
        int largest = nums[0];  
        int largestIndex = 0;   

        
        for (int j = 1; j < n; ++j) {
            if (nums[j] > largest) {
                largest = nums[j];
                largestIndex = j;
            }
        }

        // Mark the largest element as "used" by setting it to a very small value
        nums[largestIndex] = -1000000; 

 
        result = largest;
    }

    return result;
}

int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;

    int result = findKthLargest(nums, k);
    cout << "The " << k << "th largest element is: " << result << std::endl;

    return 0;
}
