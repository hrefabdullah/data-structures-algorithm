#include <iostream>
#include <cctype>
#include <vector>
#include <string>
using namespace std;

bool validPalindrome(string& s){
    
    int left = 0;
    int right = s.size() - 1;
    bool flag = true;

    for(int c : s){
        if(!isalnum(c)){
            flag = false;
            break;
        }
    }

    while(left < right){
        s[left] = tolower(s[left]);
        s[right] = tolower(s[right]);

        if(s[left] == s[right]){
            left++;
            right--;
        } else {
            flag = false;
            break;
        }
    }

    return flag;
}

int main(){

    string s = "racecar";

    bool ans = validPalindrome(s);

    if(ans){
        cout << "Valid";
    } else {
        cout << "Not Valid";
    }




    return 0;
}