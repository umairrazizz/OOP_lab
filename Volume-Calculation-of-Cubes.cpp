#include <iostream>
using namespace std;

class Cube {
private:
    double side;

public:
    Cube(double s) : side(s) {}
    
    double calculateVolume() {
        return side * side * side;
    }
};

int main() {
    Cube cube1(3.0);
    Cube cube2(4.5);
    Cube cube3(2.0);
    
    cout << "Volume of Cube 1: " << cube1.calculateVolume() << endl;
    cout << "Volume of Cube 2: " << cube2.calculateVolume() << endl;
    cout << "Volume of Cube 3: " << cube3.calculateVolume() << endl;
    
    return 0;
}
