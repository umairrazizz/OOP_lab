#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) { // Outer loop for rows
        for (int j = 1; j <= i; ++j) { // Inner loop for numbers in each row
            cout << j << " "; // Print numbers with a space
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
