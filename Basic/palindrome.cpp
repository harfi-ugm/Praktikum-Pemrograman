#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversed = str;
    reverse(reversed.begin(), reversed.end());

    if (str == reversed) {
        cout << "The string is palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}