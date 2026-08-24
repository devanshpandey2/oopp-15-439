#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(int accNo, string name, double bal)
    {
        accountNumber = accNo;
        accountHolder = name;
        balance = bal;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited Amount: " << amount << endl;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn Amount: " << amount << endl;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }
    }

    void display()
    {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account(101, "lucy", 5000);

    account.display();

    account.deposit(2000);

    account.withdraw(1500);

    account.display();

    return 0;
}