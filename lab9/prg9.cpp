#include <iostream>
using namespace std;

class Student {
    int roll;

public:
    void input() {
        cin >> roll;
    }

    void display() {
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    Student s[3];

    cout << "Enter 3 roll numbers:\n";

    for (int i = 0; i < 3; i++)
        s[i].input();

    Student *ptr = s;

    cout << "\nStudents:\n";

    for (int i = 0; i < 3; i++)
        (ptr + i)->display();

    return 0;
}