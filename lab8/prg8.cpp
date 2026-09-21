#include <iostream>
using namespace std;

class Number {
    int x;

public:
    void input() {
        cin >> x;
    }

    Number add(Number n) {
        Number temp;
        temp.x = x + n.x;
        return temp;
    }

    void display() {
        cout << x << endl;
    }
};

int main() {
    Number n1, n2, n3;

    cout << "Enter two numbers: ";
    n1.input();
    n2.input();

    n3 = n1.add(n2);

    cout << "Sum: ";
    n3.display();

    return 0;
}