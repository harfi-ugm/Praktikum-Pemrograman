#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    vector<int> nums = {1,2,3,4,5};
    int maxNum = *max_element(nums.begin(), nums.end());
    cout << "The maximum number is: " << maxNum << endl;
    return 0;
}