#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums= {1,2,3,4,5};
    sort(nums.begin(), nums.end(), greater<int>());
    cout << "The second largest number is: " << nums[1] << endl;
    return 0;
}