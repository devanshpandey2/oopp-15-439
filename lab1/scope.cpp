#include <iostream>
using namespace std;

int n = 10;

void show()
{
    cout << "Show outside" << endl;
}

class M
{
public:
    void show()
    {
        cout << "Show inside" << endl;
    }
};

int main()
{
    int n = 20;

    cout << n << endl;
    cout << ::n << endl;

    M obj;
    obj.show();

    show();

    return 0;
}