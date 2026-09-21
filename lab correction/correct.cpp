#include <bits/stdc++.h>
using namespace std;

class student
{
    int roll;
    string name;
public:

    student(int r = 0, string n = "unknown")
    {
        roll = r;
        name = n;
    }
    ~student()
    {
        cout << "Destructor called" << endl;
    }

    void show()
    {
        cout << roll << ", " << name << endl;
    }
};

int main()
{
    student s1;                 
    student s2(101, "devansh");
    student s3(102, "pandey");

    s1.show();
    s2.show();
    s3.show();

    return 0;
}