#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) { return a + b; }
    double add(double a, double b) { return a + b; }
};

int main() {
    Math m;
    cout << "Int Add: " << m.add(2, 3) << endl;
    cout << "Double Add: " << m.add(2.5, 3.7) << endl;
}
