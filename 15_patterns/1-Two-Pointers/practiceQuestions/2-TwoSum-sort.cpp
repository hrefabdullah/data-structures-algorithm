// Two Sum II - uses 1-Indexing requirement instead of 0-Indexing

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    int left = 0;
    int right = nums.size() - 1;

    while(left < right){
        int currentSum = nums[left] + nums[right];

        if(currentSum == target){
            return {left + 1, right + 1};
        } else if(currentSum < target){
            left++;
        } else {
            right--;
        }
    }

    return {};
}

int main(){

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    vector<int> ans = twoSum(arr, 5);

    if(ans.empty()){
        cout << "No Pair Found!" << endl;
    } else {
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
    }
    
    vector<int> ans2 = twoSum(arr, 17);
    
    if(ans2.empty()){
        cout << "No Pair Found!" << endl;
    } else {
        for(int i = 0; i < ans2.size(); i++){
            cout << ans2[i] << " ";
        }
    }

 

    return 0;
}