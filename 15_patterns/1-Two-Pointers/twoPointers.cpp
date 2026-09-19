#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    // num is passed by reference - no copy, original is used

    int left = 0;    // pointer at the beginning
    int right = nums.size() - 1;    // pointer at the end

    while(left < right){     // Stop when pointers meet
        int currentSum = nums[left] + nums[right];

        if(currentSum == target){
            return {left, right};     // creates a vector<int> with these two values
        } else if (currentSum < target){
            left++;
        } else {
            right--;
        }
    }
    return {};
}

vector<int> bubbleSort(vector<int>& arr){
    int n = arr.size();         // 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n- i - 1); j++){
            if(arr[j+1] < arr[j]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr;
}

int main(){

    vector<int> arr = {6, 3, 7, 1, 4, 2, 5};
    cout << "Unsorted Array : ";
    for(int x : arr){
        cout << x << " ";
    }

    cout << endl;

    vector<int> sortedArr = bubbleSort(arr);
    cout << "Sorted Array : ";
    for(int x : sortedArr){
        cout << x << " ";
    }

    cout << endl;

    vector<int> ans = twoSum(sortedArr, 4);
    cout << "Indexes for target value elements : ";
    for(int x : ans){
        cout << x << " ";
    }


    return 0;
}