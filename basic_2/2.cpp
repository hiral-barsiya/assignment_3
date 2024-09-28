//2. Define a class to represent a bank account.

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:

    void assignValues(string name, int accNum, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Amount deposited successfully. New balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully. New balance: " << balance << endl;
        }
    }

    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;

    account.assignValues("John Doe", 123456, "Savings", 1000.00);
    account.display();
    account.deposit(500);
    account.withdraw(300);
    account.withdraw(1500);
    account.display();

    return 0;
}