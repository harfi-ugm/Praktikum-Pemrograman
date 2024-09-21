#include <iostream>
using namespace std;

// Function to print multiplication table for n
void multiplicationTable(int n) {
    for (int i = 1; i <= 10; ++i) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    multiplicationTable(n);
    cout << endl;
    return 0;
}

