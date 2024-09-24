#include <iostream>
#include <cmath> // For sqrt() function
using namespace std;

int main() {
    double a, b, c; // Coefficients of the quadratic equation
    double determinant, x1, x2, realPart, imaginaryPart;

    // Input coefficients from the user
    cout << "Enter coefficients a, b, and c (for equation ax^2 + bx + c = 0): ";
    cin >> a >> b >> c;

    // Calculate the determinant
    determinant = b * b - 4 * a * c;

    // Check the determinant and calculate roots based on its value
    if (determinant > 0) {
        // Real and distinct roots
        x1 = (-b + sqrt(determinant)) / (2 * a);
        x2 = (-b - sqrt(determinant)) / (2 * a);
        cout << "Roots are real and distinct." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
        cout << endl;
    }
    else if (determinant == 0) {
        // Real and equal roots
        x1 = x2 = -b / (2 * a);
        cout << "Roots are real and equal." << endl;
        cout << "x1 = x2 = " << x1 << endl;
        cout << endl;
    }
    else {
        // Imaginary roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-determinant) / (2 * a);
        cout << "Roots are imaginary." << endl;
        cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
        cout << endl;
    }

    return 0;
}
