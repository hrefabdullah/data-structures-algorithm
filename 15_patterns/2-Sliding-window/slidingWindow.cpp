// Sliding window is for problems about contiguous subarrays or substrings. You maintain a window, defined by two pointers and slide it across the array - adding on new element as the window grows and removing one, as the window shrinks - Keeping whole thing O(n)

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// 1. Fixed size window 
// Find max sum of any 3 consecutive numbers in the array
int maxSumArr(vector<int>& nums, int k){
    int windowSum = 0;

    // Step 1: build the very first window (first k elements)
    for(int i = 0; i < k; i++){
        windowSum += nums[i];
    }

    int maxSum = windowSum;   // supposed best sum

    // Step 2 : Slide the window one position at a time
    for(int i = k; i < nums.size(); i++){
        windowSum += nums[i];            // adds a new elem on right
        windowSum -= nums[i - k];        // Remove old elem on left
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

// 2. Variable size window
// Smallest subarray with a sum > target
int minSumArrLen(vector<int>& nums, int target){
    int left = 0;
    int windowSum = 0;
    int minLen = INT_MAX;     // from <climits>

    for(int right = 0; right < nums.size(); right++){
        windowSum += nums[right];   // grows window by including nums[right]

        // shrink the window from the left as long as the condition is still satisfied
        while(windowSum >= target){
            minLen = min(minLen, right - left + 1);
            windowSum -= nums[left];
            left++;
        }
    }

    return (minLen == INT_MAX) ? 0 : minLen;
}


int main(){

    vector<int> nums = {1, 0, 10, 1, 2, 1, 17};
    int k = 3;

    cout << "Max sum of size " << k << " : " << maxSumArr(nums, k) << endl;

    vector<int> nums1 = {2, 3, 1, 2, 4, 3};
    int target = 7;

    cout << minSumArrLen(nums1, target) << endl;

    return 0;
}
