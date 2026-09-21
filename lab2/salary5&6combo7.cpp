#include <iostream>
using namespace std;

class Salary {
public:
    float salary;

    void updateReference() {
        float &newSalary = salary;
        newSalary = newSalary + newSalary * 0.10;
    }

    void updatePointer() {
        float *newSalary = &salary;
        *newSalary = *newSalary + (*newSalary * 0.10);
    }
};

int main() {
    Salary s1, s2;

    s1.salary = 50000;
    s2.salary = 50000;

    s1.updateReference();
    s2.updatePointer();

    cout << "Salary using reference: " << s1.salary << endl;
    cout << "Salary using pointer: " << s2.salary << endl;

    return 0;
}