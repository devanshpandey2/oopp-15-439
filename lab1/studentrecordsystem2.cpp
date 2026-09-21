#include <iostream>
using namespace std;

class Student {
    string name, branch;
    int roll;

public:
    void input() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll: ";
        cin >> roll;

        cout << "Enter branch: ";
        cin >> branch;
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nRoll: " << roll;
        cout << "\nBranch: " << branch << endl;
    }
};

int main() {
    Student s;

    s.input();
    s.display();

    return 0;
}