#include <iostream>
#include <cmath> // it's for sqrt() function
using namespace std;

int main() {
    double a, b, c;
    cout << "Coefficients a, b, and c: ";
    cin >> a >> b >> c; //

    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;

    // Check the discriminant and calculate roots accordingly
    if (discriminant > 0) {
        // Two distinct real roots
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The equation has two distinct real roots: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
        cout << endl;
        
    } else if (discriminant == 0) {
        // One real root
        double x = -b / (2 * a);
        cout << "The equation has one real root: " << std::endl;
        cout << "x = " << x << endl;
        cout << endl;
        
    } else {
        // No real roots, complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "The equation has complex roots: " << endl;
        cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
        cout << endl;
    }

    return 0;
}
