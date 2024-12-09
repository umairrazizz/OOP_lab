#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            cout << "Initial balance cannot be negative. Setting balance to 0.\n";
        }
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited Rs " << amount << ". Current balance: Rs " << balance << endl;
        } else {
            cout << "Invalid deposit amount. Please enter a positive value.\n";
        }
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount. Please enter a positive value.\n";
        } else if (amount > balance) {
            cout << "Insufficient funds. Your current balance is Rs " << balance << ".\n";
        } else {
            balance -= amount;
            cout << "Withdrew Rs " << amount << ". Current balance: Rs " << balance << endl;
        }
    }

    // Balance inquiry function
    void checkBalance() {
        cout << "Your current balance is Rs " << balance << endl;
    }
};

int main() {
    double initialBalance;
    int choice;
    double amount;

    // Input the initial balance
    cout << "Enter the initial balance for your account: Rs ";
    cin >> initialBalance;

    // Create a BankAccount object
    BankAccount account(initialBalance);

    do {
        // Menu
        cout << "\nBanking System Menu:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Balance Inquiry\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: // Deposit
                cout << "Enter amount to deposit: Rs ";
                cin >> amount;
                account.deposit(amount);
                break;

            case 2: // Withdraw
                cout << "Enter amount to withdraw: Rs ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3: // Balance Inquiry
                account.checkBalance();
                break;

            case 4: // Exit
                cout << "Exiting the banking system.\n";
                break;

            default:
                cout << "Invalid choice. Please choose a valid option (1-4).\n";
        }
    } while (choice != 4);

    return 0;
}
