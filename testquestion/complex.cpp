#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    
    Complex(double r = 0.0, double i = 0.0) {
        real = r;
        imag = i;
    }

    
    friend Complex operator+(const Complex& c1, const Complex& c2);

    
    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};


Complex operator+(const Complex& c1, const Complex& c2) {
    Complex temp;

    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;

    return temp;
}

int main() {

    Complex C1(3.5, 2.5);
    Complex C2(2.5, 1.5);

    Complex C3 = C1 + C2;

    cout << "C1 = ";
    C1.display();

    cout << "C2 = ";
    C2.display();

    cout << "C3 = ";
    C3.display();

    return 0;
}