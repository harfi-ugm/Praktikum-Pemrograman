#include <iostream>
#include <vector>
#include <string>

using namespace std;

// FizzBuzz function
vector<string> FizzBuzz() {
    vector<string> result;
    for (int i = 1; i <= 100; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            result.push_back("FizzBuzz");
        } else if (i % 3 == 0) {
            result.push_back("Fizz");
        } else if (i % 5 == 0) {
            result.push_back("Buzz");
        } else {
            result.push_back(to_string(i));
        }
    }
    return result;
}

// Reverse Array function
vector<int> reverseArray(const vector<int>& arr) {
    vector<int> reversedArr;
    for (int i = arr.size() - 1; i >= 0; --i) {
        reversedArr.push_back(arr[i]);
    }
    return reversedArr;
}

int main() {
    // FizzBuzz
    vector<string> fizzBuzzResults = FizzBuzz();
    cout << "FizzBuzz Results:\n";
    for (const string& result : fizzBuzzResults) {
        cout << result << " ";
    }
    cout << endl;

    // Reverse Array
    vector<int> originalArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                                 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 
                                 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 
                                 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 
                                 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 
                                 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 
                                 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 
                                 71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
                                 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 
                                 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};

    vector<int> reversedArray = reverseArray(originalArray);

    cout << "\nReversed Array:\n";
    for (int num : reversedArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

