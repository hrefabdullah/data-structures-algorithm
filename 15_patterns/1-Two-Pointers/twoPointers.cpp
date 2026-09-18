#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    int left = 0, right = nums.size() - 1;
    while(left < right){
        int currentSum = nums[left] + nums[right];
        if(currentSum == target){
            return {left, right};
        } else if(currentSum < target){
            left++;
        } else {
            right--;
        }
    }

    return {}
}