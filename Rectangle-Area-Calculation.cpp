#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }

    double getLength() {
        return length;
    }

    double getWidth() {
        return width;
    }

    double calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    rect.setLength(5.0);
    rect.setWidth(3.0);
    cout << "Area: " << rect.calculateArea() << endl;
    return 0;
}