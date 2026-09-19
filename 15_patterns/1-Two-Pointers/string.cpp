#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){

    string s = "Hello";
    cout << s << endl;
    cout << s[0] << endl;

    for(int i = 0; i < s.size(); i++){
        cout << s[i] << " ";
    }

    cout << endl;

    // Modifying Characters
    string a = "joo";
    a[0] = 'f';

    // Contatination
    string b = "bar";
    string c = a + b;

    cout << c << endl;

    // Comparison
    cout << (a == b) << endl;
    a += "baz";
    cout << a << endl;


    // Sub string
    string a1 = "Hello World!";
    string b1 = s.substr(0, 5);
    cout << b1 << endl;


    // string functions
    cout << isalnum(a1[5]) << endl;   // Check if alphaNum
    char a2 = tolower('A');
    cout << a2 << endl;

    return 0;
}