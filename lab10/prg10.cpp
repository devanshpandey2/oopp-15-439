#include <iostream>
#include <memory>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Object Created\n";
    }

    ~Demo() {
        cout << "Object Destroyed\n";
    }

    void display() {
        cout << "Smart Pointer Example\n";
    }
};

int main() {
    unique_ptr<Demo> p1 = make_unique<Demo>();
    p1->display();

    shared_ptr<Demo> p2 = make_shared<Demo>();
    shared_ptr<Demo> p3 = p2;

    cout << "Shared Count: " << p2.use_count() << endl;

    return 0;
}