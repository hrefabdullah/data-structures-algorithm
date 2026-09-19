#include <vector>
#include <iostream>
using namespace std;

// Core Idea : Using two index variables to traverse a data structure(list) instead on one, in order to avoid nested loop (O(n2)), We do O(n)

// Vector is a resizable array, it can grow or shrink ata runtime

// vector<int> twoSum(vector<int>& nums, int target){
//     int left = 0, right = nums.size() - 1;
//     while(left < right){
//         int currentSum = nums[left] + nums[right];
//         if(currentSum == target){
//             return {left, right};
//         } else if(currentSum < target){
//             left++;
//         } else {
//             right--;
//         }
//     }

//     return 1;
// }

void modify(vector<int>& v){
    v.push_back(100);
}

void readOnly(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}

void readOnlyFast(const vector<int>& v ){
    cout << endl;
    cout << v[2];
}

int main(){

    vector<int> nums;      // Empty vector of ints
    vector<int> nums2(5);  // Vector of 5 ints, all initialized to 0
    vector<int> nums3 = {1, 2, 3, 4, 5};     // declared & initialized
    vector<int> nums4(5, 9);     // 5, ints, all initialized to 9

    vector<int> v = {10, 20, 30, 40};

    // cout << "Length: " << v.size() << endl;    // Gives length of the vector
    // v.push_back(50);       // Adds a value to the back
    // v.pop_back();          // Removes last element
    // cout << v.at(0) << endl;    // same as v[0]
    // cout << v.empty() << endl;   // True if size 0, else false
    // cout << v.front() << endl;   // gives first element
    // cout << v.back() << endl;    // gives last element


    // Looping through a vector 
    
    // 1. Index based
    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }

    // cout << endl;
    
    // // 2. Range based
    // for(int x : v){
    //     cout << x << " ";
    // }
    
    // cout << endl;
    
    // // 3. Range based with reference (avoid copying, lets you modify)
    // for(int& x : v){
    //     x = x * 2;
    //     cout << x << " ";
    //     cout << x << " ";
    // }
    
    // cout << endl;


    // Passing vectors to functions
    // Pass by reference (&) - No copying, lets you modify - MOST IMPORTANT
    modify(v);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << endl;

    // Pass by value (no &) - makes a copy, slower and wasteful for large array
    readOnly(v);


    // Pass by const reference - read only access, no copying, good for functions that just need to look at the vector without modifying it
    readOnlyFast(v);
    

    return 0;
}