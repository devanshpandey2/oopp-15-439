#include <iostream>
using namespace std;

class Salary {
public:
    float salary;

    void update() {
        float &newSalary = salary;
        newSalary = newSalary + newSalary * 0.10;
    }
};

int main() {
    Salary s;
    s.salary = 50000;

    s.update();

    cout << "Salary from old variable: " << s.salary;

    return 0;
}