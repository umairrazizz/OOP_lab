#include <iostream>
using namespace std;

int main() {
    int rows;

    // Input the number of rows for the pyramid
    cout << "Enter the number of rows for the pyramid: ";
    cin >> rows;

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // Print ascending numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print descending numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
