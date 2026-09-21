#include <iostream>
using namespace std;

class Distance {
    int meter;
    
public:
    Distance(int m = 0) {
        meter = m;
    }

    operator int() {
        return meter;
    }

    void display() {
        cout << "Distance: " << meter << " meters\n";
    }
};

int main() {
    int x = 50;

    Distance d = x;
    d.display();

    int y = d;

    cout << "Converted back to int: " << y << endl;

    return 0;
}