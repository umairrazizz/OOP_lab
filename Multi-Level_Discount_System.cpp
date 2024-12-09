#include <iostream>
using namespace std;

int main() {
    double purchaseAmount, discount, finalPrice;

    // Input purchase amount
    cout << "Enter the purchase amount (in Rs): ";
    cin >> purchaseAmount;

    // Calculate discount using nested conditional operators
    discount = (purchaseAmount < 100) ? 0 :
               (purchaseAmount <= 500) ? 0.10 * purchaseAmount :
               (purchaseAmount <= 1000) ? 0.15 * purchaseAmount :
               0.20 * purchaseAmount;

    // Calculate final price
    finalPrice = purchaseAmount - discount;

    // Output results
    cout << "Purchase Amount: Rs " << purchaseAmount << endl;
    cout << "Discount Applied: Rs " << discount << endl;
    cout << "Final Price: Rs " << finalPrice << endl;

    return 0;
}
