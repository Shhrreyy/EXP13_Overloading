#include <iostream>
using namespace std;

class Box {
    int l, b, h;
public:
    Box() { l = b = h = 0; }
    Box(int x) { l = b = h = x; }
    Box(int x, int y, int z) { l = x; b = y; h = z; }
    int volume() { return l*b*h; }
};

int main() {
    Box b1, b2(5), b3(2,3,4);
    cout << "Volume b1: " << b1.volume() << endl;
    cout << "Volume b2: " << b2.volume() << endl;
    cout << "Volume b3: " << b3.volume() << endl;
}
