// Reverse a String

#include <vector>
#include <iostream>
#include <string>
using namespace std;

void reverse(vector<char>& str){
    int left = 0;
    int right = str.size() - 1;

    while(left < right){
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }

}

int main(){

    string str1 = "hello";
    vector<char> strMain(str1.begin(), str1.end());

    reverse(strMain);

    for(char c : strMain){
        cout << c << "";
    }

    return 0;
}