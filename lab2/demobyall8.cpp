#include <iostream>
using namespace std;

class Demo {
public:
    void callByValue(int x) {
        x = x + 10;
    }
    
    void callByReference(int &x) {
        x = x + 10;
    }

    void callByAddress(int *x) {
        *x = *x + 10;
    }
};

int main() {
    Demo d;

    int a = 10, b = 10, c = 10;

    d.callByValue(a);
    d.callByReference(b);
    d.callByAddress(&c);

    cout << "Call by Value: " << a << endl;
    cout << "Call by Reference: " << b << endl;
    cout << "Call by Address: " << c << endl;

    return 0;
}