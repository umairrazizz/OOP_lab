#include <iostream>
#include <cmath>
using namespace std;

class Circle {
public:
    Circle(double r) {
        radius = r;
    }

    double calculateArea() {
        return 3.1467 * radius * radius;
    }

private:
    double radius;
};

int main() {

    Circle circle(5);
    cout << "Area of the circle: " << circle.calculateArea() << endl;

    return 0;
}