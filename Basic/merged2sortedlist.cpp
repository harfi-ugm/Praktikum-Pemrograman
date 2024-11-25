#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    vector<int> list1 = {1,3,5};
    vector<int> list2 = {2,4,6};
    vector<int> merged;

    merge(list1.begin(), list1.end(), list2.begin(), list2.end(), back_inserter(merged));

    cout << "Merged list: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
