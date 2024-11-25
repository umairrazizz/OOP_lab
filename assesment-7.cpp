/*
Write a program to find and print all pairs (x, y) such that:
• x^2 + y^2 = n
where n is an input number, and both x and y range from 0 to sqrt(n). Use break and
continue statements to optimize the solution.
*/
#include <iostream>
using namespace std;

int main() {
    int num, reversed;

    do {
        cout << "Enter a positive integer: ";
        cin >> num;
        reversed = 0;

        if (num != 0) {
            while (num > 0) {
                reversed = reversed * 10 + (num % 10);
                num /= 10;
            }
            cout << "Reversed number: " << reversed << endl;
        }
    } while (num != 0);

    return 0;
}
