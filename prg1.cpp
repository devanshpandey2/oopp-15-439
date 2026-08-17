#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    // Function to input student details
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display student details
    void display() {
        cout << "\nStudent Details\n";
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks << endl;

        if (marks >= 40)
            cout << "Result      : Pass" << endl;
        else
            cout << "Result      : Fail" << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];

    // Input details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << ":\n";
        students[i].input();
    }

    // Display details
    cout << "\n===== STUDENT RECORDS =====\n";

    for (int i = 0; i < n; i++) {
        students[i].display();
    }

    return 0;
}