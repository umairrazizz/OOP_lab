#include <iostream>
using namespace std;

int main() {
    double income, tax = 0.0;
    cout << "Enter your annual income: ";
    cin >> income;

    if (income < 0 || cin.fail()) {
        cout << "Invalid input! Please enter a valid positive income." << endl;
        return 1;
    }

    if (income <= 250000) {
        tax = 0.0; // No tax
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05; // 5% tax on income above ₹2,50,000
    } else if (income <= 1000000) {
        tax = 250000 * 0.05 + (income - 500000) * 0.20; // 5% for ₹2,50,001-₹5,00,000 + 20% above ₹5,00,000
    } else {
        tax = 250000 * 0.05 + 500000 * 0.20 + (income - 1000000) * 0.30; // Additional 30% for income above ₹10,00,000
    }

    cout << "Your tax amount is: ₹" << tax << endl;
    return 0;
}
