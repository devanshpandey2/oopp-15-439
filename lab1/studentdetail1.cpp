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

    void show() {
        cout << "\nName: " << name;
        cout << "\nRoll: " << roll;
        cout << "\nBranch: " << branch << endl;
    }
};

int main() {
    Student s1, s2;

    cout << "Enter details of Student 1:\n";
    s1.input();

    cout << "\nEnter details of Student 2:\n";
    s2.input();

    cout << "\nStudent 1 Details:";
    s1.show();

    cout << "\nStudent 2 Details:";
    s2.show();

    return 0;
}