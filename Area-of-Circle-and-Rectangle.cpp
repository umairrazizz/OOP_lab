#include <iostream>
using namespace std;

class Shape {
private:
    double radius;
    double length;
    double breadth;
    bool isCircle;

public:
    Shape() : radius(0), length(0), breadth(0), isCircle(false) {}
    
    Shape(double r) : radius(r), isCircle(true) {}
    
    Shape(double l, double b) : length(l), breadth(b), isCircle(false) {}
    
    double calculateArea() {
        if (isCircle) {
            return 3.14159 * radius * radius;
        } else {
            return length * breadth;
        }
    }
};

int main() {
    Shape circle(5.0);
    Shape rectangle(4.0, 6.0);
    
    cout << "Area of Circle: " << circle.calculateArea() << endl;
    cout << "Area of Rectangle: " << rectangle.calculateArea() << endl;
    
    return 0;
}
