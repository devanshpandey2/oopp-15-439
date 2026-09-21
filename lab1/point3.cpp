#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    void input() {
        cout << "Enter x: ";
        cin >> x;

        cout << "Enter y: ";
        cin >> y;
    }

    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Point p1, p2;

    cout << "Enter Point 1:\n";
    p1.input();

    cout << "Enter Point 2:\n";
    p2.input();

    cout << "\nPoint 1: ";
    p1.show();

    cout << "Point 2: ";
    p2.show();

    return 0;
}