#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    cout << "Enter radius of circle";
    cin >> radius;
    double area = M_PI * radius * radius;
    cout << "The radius of circle is" << area << endl;
    return 0;
}