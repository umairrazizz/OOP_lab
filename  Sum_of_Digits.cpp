#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, product = 1;

    // Input the number
    cout << "Enter an integer: ";
    cin >> num;

    // Store the absolute value of the number for correct handling of negative numbers
    int n = abs(num);

    // Extract and sum the digits while also calculating the product
    while (n > 0) {
        int digit = n % 10;  // Extract the last digit
        sum += digit;        // Add the digit to sum
        product *= digit;    // Multiply the digit to product
        n /= 10;             // Remove the last digit
    }

    // Output the results
    cout << "Sum of digits: " << sum << endl;
    cout << "Product of digits: " << product << endl;

    return 0;
}
