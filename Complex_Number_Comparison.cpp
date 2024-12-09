#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the magnitude of a complex number
double magnitude(double real, double imag) {
    return sqrt(real * real + imag * imag);
}

int main() {
    double real1, imag1, real2, imag2;

    // Input the first complex number
    cout << "Enter the real part of the first complex number: ";
    cin >> real1;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> imag1;

    // Input the second complex number
    cout << "Enter the real part of the second complex number: ";
    cin >> real2;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> imag2;

    // Calculate magnitudes
    double mag1 = magnitude(real1, imag1);
    double mag2 = magnitude(real2, imag2);

    // Compare magnitudes
    if (mag1 > mag2) {
        cout << "The first complex number has a higher magnitude." << endl;
    } else if (mag2 > mag1) {
        cout << "The second complex number has a higher magnitude." << endl;
    } else {
        cout << "Both complex numbers have the same magnitude (Equal)." << endl;
    }

    return 0;
}
