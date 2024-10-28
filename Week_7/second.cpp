#include <iostream>
using namespace std;

int factorial(int x) {
    if (x <=1) {
        return 1;
    } else {
        return x * factorial(x - 1);
    }
}

int main() {
    int number;
    cout << "Enter a number to calculate factorial: ";
    cin >> number;

    cout << "Factorial of " << number << " is " << factorial(number) << endl;

    return 0;
}
