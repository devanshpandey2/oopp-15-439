#include <iostream>
using namespace std;

class Student {
    int marks;
    static int count;

public:
    Student(int m) {
        marks = m;
        count++;
    }

    friend void show(Student s);

    static void displayCount() {
        cout << "Objects: " << count << endl;
    }
};

int Student::count = 0;

void show(Student s) {
    cout << "Marks: " << s.marks << endl;
}

int main() {
    Student s1(90);
    Student s2(80);

    show(s1);
    show(s2);

    Student::displayCount();

    return 0;
}