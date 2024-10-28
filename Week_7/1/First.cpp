#include <iostream>
using namespace std;
//program with some function to calculate simple mathematic operation, namely addition or difference!

int calculate(int a, int b, char op) {
    if (op == '+') {
        return a + b;
    } else if (op == '-') {
        return a - b;
    } else  {
        cout << "Invalid operator!" << endl;
        return 0;
    }
}

int main () {
    int num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operation";
    cin >> operation;

    int result = calculate(num1, num2, operation);
    cout << "Result: " << result << endl;

    return 0;
}
