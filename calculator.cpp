#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;
    bool validOperation = true;

    // Input operands and operator
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;
    cout << "Enter the second number: ";
    cin >> num2;

    // Calculator logic using the conditional operator
    result = (op == '+') ? (num1 + num2) :
             (op == '-') ? (num1 - num2) :
             (op == '*') ? (num1 * num2) :
             (op == '/' && num2 != 0) ? (num1 / num2) :
             (op == '%' && static_cast<int>(num2) != 0) ? (static_cast<int>(num1) % static_cast<int>(num2)) :
             (validOperation = false, 0); // Invalid operation or division by zero

    // Display result or error message
    if (validOperation) {
        cout << "Result: " << result << endl;
    } else {
        if (op == '/' && num2 == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
        } else if (op == '%' && static_cast<int>(num2) == 0) {
            cout << "Error: Modulo by zero is not allowed." << endl;
        } else {
            cout << "Error: Invalid operator." << endl;
        }
    }

    return 0;
}
