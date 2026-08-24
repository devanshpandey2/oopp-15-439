#include<iostream>

using namespace std;

void show(int x,int y)
{
    cout<<"x="<<x<<" y="<<y<<endl;
}

void swapByVal(int x,int y)
{
    int z=x;
    x=y;
    y=z;
    
}

void swapByAddress(int *x,int *y)
{
    int z=*x;
    *x=*y;
    *y=z;
}

void swapByReference(int &x,int &y)
{
    int z=x;
    x=y;
    y=z;
}

int main()
{

    int x,y;
    cout<<"enter value of x and y"<<endl;
    cin>>x>>y;
    // 
    cout<<"Swapping by value"<<endl;
    cout<<"Value Before swap :"<<endl;
    show(x,y);
    swapByVal(x,y);
    cout<<"Value After swap :"<<endl;
    show(x,y);


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


    return 0;
}
