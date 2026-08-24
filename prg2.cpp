#include <iostream>
using namespace std;

void swapByValue(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

void swapByAddress(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swapByReference(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x, y;

    cout << "Enter value of x,y: ";
    cin >> x >> y;

    cout << "\nSwapping by Value\n";
    cout << "Value before swap\n";
    cout << "x:" << x << ", y:" << y << endl;
    swapByValue(x, y);
    cout << "Value after swap\n";
    cout << "x:" << x << ", y:" << y << endl;

    cout << "\n\nSwapping by Address\n";
    cout << "Value before swap\n";
    cout << "x:" << x << ", y:" << y << endl;
    swapByAddress(&x, &y);
    cout << "Value after swap\n";
    cout << "x:" << x << ", y:" << y << endl;

    cout << "\n\nSwapping by Reference\n";
    cout << "Value before swap\n";
    cout << "x:" << x << ", y:" << y << endl;
    swapByReference(x, y);
    cout << "Value after swap\n";
    cout << "x:" << x << ", y:" << y << endl;

    return 0;
}