/*
program that checks whether a given year is a leap year
*/
#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year < 0) {
        cout << "Invalid input! Please enter a valid positive year." << endl;
        return 1;
    }

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
