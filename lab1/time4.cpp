#include <iostream>
using namespace std;

class Time {
    int hh, mm, ss;

public:
    void input(int h, int m, int s) {
        hh = h;
        mm = m;
        ss = s;
    }

    void show() {
        cout << hh << ":" << mm << ":" << ss << endl;
    }
};

int main() {
    Time t1, t2;
    int h, m, s;

    cout << "Enter time 1 (hh mm ss): ";
    cin >> h >> m >> s;
    t1.input(h, m, s);

    cout << "Enter time 2 (hh mm ss): ";
    cin >> h >> m >> s;
    t2.input(h, m, s);

    cout << "\nTime 1: ";
    t1.show();

    cout << "Time 2: ";
    t2.show();

    return 0;
}