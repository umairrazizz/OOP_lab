/*
program that accepts a number n and prints all prime numbers less than or equal to n.
Use a while loop and a function to check if a number is prime.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, i = 2, j;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " are: ";
    while (i <= n) {
        bool isPrime = true;
        for (j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime && i > 1) {
            cout << i << " ";
        }
        ++i;
    }

    return 0;
}
