#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x, y;

public:
    Point(double xVal = 0, double yVal = 0) : x(xVal), y(yVal) {}
    
    Point(const Point& other) : x(other.x), y(other.y) {}
    
    double calculateDistance(const Point& p2) {
        return sqrt(pow(p2.x - x, 2) + pow(p2.y - y, 2));
    }
};

int main() {
    Point p1(3.0, 4.0);
    Point p2 = p1;
    
    cout << "Distance between points: " << p1.calculateDistance(Point(7.0, 1.0)) << endl;
    
    return 0;
}
