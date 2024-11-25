#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "input a string: ";
    cin >> str;
    reverse(str.begin(), str.end());
    cout << "reversed string: " << str << endl;
    return 0;
}