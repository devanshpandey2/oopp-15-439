#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    // Default Constructor
    Student() {
        roll = 0;
        name = "Unknown";
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Student(int r, string n) {
        roll = r;
        name = n;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        cout << "Copy Constructor Called" << endl;
    }

    // Display function
    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor Called for " << name << endl;
    }
};

int main() {

    cout << "Creating Student 1:" << endl;
    Student s1;
    s1.display();

    cout << "\nCreating Student 2:" << endl;
    Student s2(101, "Rahul");
    s2.display();

    cout << "\nCreating Student 3 using copy constructor:" << endl;
    Student s3 = s2;
    s3.display();

    cout << "\nEnd of program..." << endl;

    return 0;
}