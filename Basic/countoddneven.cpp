#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1,2,3,4,5};
    int oddCount = 0, evenCount = 0;

    for (int num:nums) {
        if (num % 2 == 0) evenCount++;
        else oddCount++;
    }
    
    cout << "oddCount:" << oddCount << ", evenCount: " << evenCount << endl;
    return 0;   

}