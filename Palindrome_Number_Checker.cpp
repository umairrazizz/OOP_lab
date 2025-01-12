#include <iostream>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int number) {
    int original = number, reversed = 0;

    // Reverse the number using a while loop
    while (number > 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    return original == reversed;  // Check if reversed equals the original
}

// Function to print all palindrome numbers in a given range
void printPalindromesInRange(int start, int end) {
    cout << "Palindrome numbers between " << start << " and " << end << ": ";
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int number, start, end;

    // Check if a number is a palindrome
    cout << "Enter a number to check if it's a palindrome: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    // Input range
    cout << "Enter the range to find palindrome numbers (start and end): ";
    cin >> start >> end;

    // Print all palindrome numbers in the range
    printPalindromesInRange(start, end);

    return 0;
}
