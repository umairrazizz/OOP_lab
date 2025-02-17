#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}
    
    Complex addComplex(const Complex& other) {
        return Complex(real + other.real, imaginary + other.imaginary);
    }
    
    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);
    Complex sum = c1.addComplex(c2);
    
    cout << "Sum of Complex Numbers: ";
    sum.display();
    
    return 0;
}
