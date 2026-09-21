#include <iostream>
using namespace std;

class Laptop {
private:
    string brand;
    int ram;

public:
    Laptop() {
        brand = "Unknown";
        ram = 0;
        cout << "Default Constructor Called\n";
    }

    Laptop(string b, int r) {
        brand = b;
        ram = r;
        cout << "Parameterized Constructor Called\n";
    }

    Laptop(const Laptop &l) {
        brand = l.brand;
        ram = l.ram;
        cout << "Copy Constructor Called\n";
    }

    void display() {
        cout << "Brand: " << brand
             << "\nRAM: " << ram << " GB\n";
    }

    ~Laptop() {
        cout << "Destructor Called for " << brand << endl;
    }
};

int main() {
    Laptop l1;
    Laptop l2("Dell", 16);
    Laptop l3 = l2;

    l1.display();
    l2.display();
    l3.display();

    return 0;
}