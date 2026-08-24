#include <iostream>
using namespace std;

inline int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b = 2)
{
    return a * b;
}

int subtract(int a, int b)
{
    return a - b;
}

double subtract(double a, double b)
{
    return a - b;
}

int main()
{
    int x, y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "Addition (Inline Function): " << add(x, y) << endl;

    cout << "Multiplication (Default Argument): " << multiply(x) << endl;
    cout << "Multiplication (With Two Arguments): " << multiply(x, y) << endl;

    cout << "Subtraction (Integer): " << subtract(x, y) << endl;
    cout << "Subtraction (Double): " << subtract(10.5, 4.2) << endl;

    return 0;
}