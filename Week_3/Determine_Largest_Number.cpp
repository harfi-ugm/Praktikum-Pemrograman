#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    // Input the three numbers
    cout << "Input number 1: ";
    cin >> num1;
    cout << "Input number 2: ";
    cin >> num2;
    cout << "Input number 3: ";
    cin >> num3;

    // Determine the largest number
    if (num1 >= num2 && num1 >= num3) {
        cout << "The largest number is: " << num1 << endl;
    }
    else if (num2 >= num1 && num2 >= num3) {
        cout << "The largest number is: " << num2 << endl;
    }
    else {
        cout << "The largest number is: " << num3 << endl;
    }

    return 0;
}
