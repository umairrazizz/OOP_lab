#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    Calculator() : num1(0), num2(0) {}
    
    Calculator* setValues(double n1, double n2) {
        this->num1 = n1;
        this->num2 = n2;
        return this;
    }
    
    double add() { return num1 + num2; }
    double subtract() { return num1 - num2; }
    double multiply() { return num1 * num2; }
    double divide() { return num2 != 0 ? num1 / num2 : 0; }
};

int main() {
    Calculator calc;
    calc.setValues(10.5, 2.5);
    
    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;
    
    return 0;
}
