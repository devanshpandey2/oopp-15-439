#include <bits/stdc++.h>
using namespace std;
class A
{
    public:
    A()
    {
        cout << "A cons." << endl;
    }
};
class B : public A
{
public:
    B(int x)
    {
        cout << "B cons." << endl;
    }
};
int main()
{
    B obb(10);
    return 0;
}