#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    // Input coefficients
    cout << "Enter the coefficient a: ";
    cin >> a;
    cout << "Enter the coefficient b: ";
    cin >> b;
    cout << "Enter the coefficient c: ";
    cin >> c;

    // Check if the coefficient 'a' is valid (non-zero)
    if (a == 0) {
        cout << "Invalid input. Coefficient 'a' cannot be zero for a quadratic equation." << endl;
        return 0;
    }

    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;

    // Determine the nature of the roots
    if (discriminant > 0) {
        // Real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are real and distinct." << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (discriminant == 0) {
        // Real and equal roots
        double root = -b / (2 * a);
        cout << "The roots are real and equal." << endl;
        cout << "Root: " << root << endl;
    } else {
        // Imaginary roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "The roots are imaginary." << endl;
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
