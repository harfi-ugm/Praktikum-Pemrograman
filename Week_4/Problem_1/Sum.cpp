#include <iostream>
#include <sstream>
using namespace std;

// Function to calculate the sum of natural numbers up to n
string sumOfNaturalNumbers(int n) {
    int sum = 0;
    stringstream explanation; //build explanation string

    explanation << "(";
    for (int i = 1; i <= n; ++i) {
        sum += i;
        explanation << i;
        if (i != n) { //add "+" except for the last number
            explanation << " + ";
        }
    }
    explanation << " = " << sum << ")";
    
    string result = "Sum =" + to_string(sum) + "\nExplanation: " + explanation.str();
    return result;
    
}

int main() {
    int n;
    cin >> n;
    cout << "Input: " << n << endl;
    cout << sumOfNaturalNumbers(n) << endl;
    cout << endl;
    return 0;
}
