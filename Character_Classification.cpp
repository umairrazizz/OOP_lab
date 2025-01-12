#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input a single character
    cout << "Enter a single character: ";
    cin >> ch;

    // Classify the character
    switch (ch) {
        // Vowels (uppercase and lowercase)
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "The character is an uppercase vowel." << endl;
            break;
        case 'a': case 'e': case 'i': case 'o': case 'u':
            cout << "The character is a lowercase vowel." << endl;
            break;

        // Digits
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            cout << "The character is a digit." << endl;
            break;

        // Special characters
        default:
            // Check if it's a consonant
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                cout << "The character is a consonant." << endl;
            } else {
                cout << "The character is a special character." << endl;
            }
            break;
    }

    return 0;
}
