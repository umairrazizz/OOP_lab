#include <iostream>
using namespace std;

class MaxFinder {
public:
    int findMax(int a, int b) {
        return (a > b) ? a : b;
    }
    
    double findMax(double a, double b) {
        return (a > b) ? a : b;
    }
    
    int findMax(int a, int b, int c) {
        return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    }
};

int main() {
    MaxFinder maxFinder;
    
    cout << "Max of 10 and 20: " << maxFinder.findMax(10, 20) << endl;
    cout << "Max of 5.5 and 2.3: " << maxFinder.findMax(5.5, 2.3) << endl;
    cout << "Max of 7, 14, and 10: " << maxFinder.findMax(7, 14, 10) << endl;
    
    return 0;
}
