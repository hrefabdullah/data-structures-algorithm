#include <iostream>
#include <vector>
using namespace std;


// Goal - Push all zeroes to the end. Keep everything else in order

void moveZeroes(vector<int>& nums){
    int slow = 0;

    // Job 1: Scan with fast, place keeper using slow
    for(int fast = 0; fast < nums.size(); fast++){
        if(nums[fast] != 0){
            nums[slow] = nums[fast];
            slow++;
        }
    }

    // Job 2: Everything from slow onwards becomes 0;
    for(int i = slow; i < nums.size(); i++){
        nums[i] = 0;
    }
}


int main(){

    vector<int> nums = {1, 0, 2, 0, 3, 0};

    for(int x: nums){
        cout << x << " ";
    }

    cout << endl;

    moveZeroes(nums);

    for(int x: nums){
        cout << x << " ";
    }

    return 0;
}