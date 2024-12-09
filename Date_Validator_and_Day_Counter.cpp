#include <iostream>
using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to validate the date
bool isValidDate(int day, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        return false;
    }

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Adjust for leap year
    if (month == 2 && isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    return day <= daysInMonth[month - 1];
}

// Function to calculate the day of the week
string getDayOfWeek(int day, int month, int year) {
    // Zeller's Congruence Algorithm
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int dayOfWeek = (day + (13 * (month + 1)) / 5 + k + (k / 4) + (j / 4) - (2 * j)) % 7;

    // Map dayOfWeek to string
    switch ((dayOfWeek + 7) % 7) {  // Ensure non-negative result
        case 0: return "Saturday";
        case 1: return "Sunday";
        case 2: return "Monday";
        case 3: return "Tuesday";
        case 4: return "Wednesday";
        case 5: return "Thursday";
        case 6: return "Friday";
        default: return "Invalid"; // Should never reach here
    }
}

int main() {
    int day, month, year;

    // Input date
    cout << "Enter the date in DD-MM-YYYY format: ";
    scanf("%d-%d-%d", &day, &month, &year);  // Input in DD-MM-YYYY format

    // Validate the date
    if (!isValidDate(day, month, year)) {
        cout << "Invalid date." << endl;
        return 0;
    }

    // Get the day of the week
    string dayOfWeek = getDayOfWeek(day, month, year);
    cout << "The date is valid." << endl;
    cout << "Day of the week: " << dayOfWeek << endl;

    return 0;
}
