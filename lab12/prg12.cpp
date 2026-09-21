#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-() {
        return Complex(-real, -imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(2, 5);

    Complex c3 = c1 + c2;
    cout << "Binary + : ";
    c3.display();

    Complex c4 = -c1;
    cout << "Unary - : ";
    c4.display();

    return 0;
}