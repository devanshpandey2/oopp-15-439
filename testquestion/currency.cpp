#include <iostream>
using namespace std;

class Currency {
private:
    int rupees;
    int paise;

public:
    
    Currency(float amount) {
        rupees = (int)amount;
        paise = (int)((amount - rupees) * 100 + 0.5 );
    }

    
    operator float() {
        return rupees + paise / 100.0f;
    }

    void display() {
        cout << rupees << " rupees, "
             << paise << " paise" << endl;
    }
};

int main() {
    float amount = 145.59f;

    
    Currency c = amount;

    cout << "Currency: ";
    c.display();

   
    float value = c;

    cout << "Floating value: " << value << endl;

    return 0;
}