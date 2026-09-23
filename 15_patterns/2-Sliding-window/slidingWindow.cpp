// Sliding window is for problems about contiguous subarrays or substrings. You maintain a window, defined by two pointers and slide it across the array - adding on new element as the window grows and removing one, as the window shrinks - Keeping whole thing O(n)

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// 1. Fixed size window 
// Find max sum of any 3 consecutive numbers in the array
int maxSumArr(vector<int>& nums, int k){
    int windowSum = 0;

    for(int i = 0; i < k; i++){
        windowSum += nums[i];
    }

    int maxSum = windowSum;

    for(int i = k; i < nums.size(); i++){
        windowSum += nums[i];
        windowSum -= nums[i - k];
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main(){

    vector<int> nums = {1, 0, 10, 1, 2, 1, 17};
    int k = 3;

    cout << "Max sum of size " << k << " : " << maxSumArr(nums, k) << endl;

    return 0;
}
