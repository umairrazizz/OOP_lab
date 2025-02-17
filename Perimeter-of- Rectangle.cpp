#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle() : length(0), width(0) {}
    
    Rectangle(double l, double w) : length(l), width(w) {}
    
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect1;
    Rectangle rect2(5.0, 3.0);
    
    cout << "Default Rectangle Perimeter: " << rect1.calculatePerimeter() << endl;
    cout << "Parameterized Rectangle Perimeter: " << rect2.calculatePerimeter() << endl;
    
    return 0;
}
