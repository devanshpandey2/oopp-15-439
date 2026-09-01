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
<<<<<<< HEAD
    int temp = x;
    x = y;
    y = temp;
=======
    int z=*x;
    *x=*y;
    *y=z;
}

void swapByReference(int &x,int &y)
{
    int z=x;
    x=y;
    y=z;
>>>>>>> df945b7b729ff81a48f5ba4f85485b6047b43cac
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

<<<<<<< HEAD
    cout << "\n\nSwapping by Address\n";
    cout << "Value before swap\n";
    cout << "x:" << x << ", y:" << y << endl;
    swapByAddress(&x, &y);
    cout << "Value after swap\n";
    cout << "x:" << x << ", y:" << y << endl;
=======
    cout<<"Swap by address"<<endl;
    cout<<"Value Before swap :"<<endl;
    show(x,y);
    swapByAddress(&x,&y);
    cout<<"Value After swap :"<<endl;
    show(x,y);


    cout<<"Swap by reference"<<endl;
    cout<<"Value Before swap :"<<endl;
    show(x,y);
    swapByReference(x,y);
    cout<<"Value After swap :"<<endl;
    show(x,y);
>>>>>>> df945b7b729ff81a48f5ba4f85485b6047b43cac

    cout << "\n\nSwapping by Reference\n";
    cout << "Value before swap\n";
    cout << "x:" << x << ", y:" << y << endl;
    swapByReference(x, y);
    cout << "Value after swap\n";
    cout << "x:" << x << ", y:" << y << endl;

    return 0;
}
