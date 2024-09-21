#include <iostream>
using namespace std;

int main () {
    int n, sum = 0;

    // Input
    cout << "Enter positive integer";
    cin >> n;

    //Calculate sum of natural number from 1 to n
    for (int i = 1; i <= n; ++i){
        sum += i;
    }

    //ouput
    cout << "Sum = " << sum << endl;

    return 0;

}
