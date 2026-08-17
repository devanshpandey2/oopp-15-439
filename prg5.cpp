#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNo;
    float balance;

public:
    void setData() {
        cout << "Enter Account Number: ";
        cin >> accountNo;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(float amount) {
        balance = balance + amount;
    }

    void withdraw(float amount) {
        if (amount <= balance)
            balance = balance - amount;
        else
            cout << "Insufficient Balance!" << endl;
    }

    void display() {
        cout << "\nAccount Number: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b;
    float amount;

    b.setData();

    cout << "Enter deposit amount: ";
    cin >> amount;
    b.deposit(amount);

    cout << "Enter withdrawal amount: ";
    cin >> amount;
    b.withdraw(amount);

    b.display();

    return 0;
}