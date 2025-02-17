#include <iostream>
using namespace std;

class Triangle {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}
    
    double calculateArea() {
        return 0.5 * base * height;
    }
    
    ~Triangle() {
        cout << "Triangle object destroyed." << endl;
    }
};

int main() {
    Triangle tri(6.0, 4.0);
    cout << "Area: " << tri.calculateArea() << endl;
    return 0;
}
