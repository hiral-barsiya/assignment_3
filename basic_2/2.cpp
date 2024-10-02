//2. Define a class to represent a bank account.

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string n, int accNum, double bal) {
        name = n;
        accountNumber = accNum;
        balance = bal;
    }

    // Deposit money
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    // Withdraw money
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    // Display account information
    void display() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    string n;
    int accNum;
    double bal;
    double depositAmount, withdrawAmount;


    cout << "Enter name: ";
    cin>> n;
    cout << "Enter account number: ";
    cin >> accNum;
    cout << "Enter  balance: ";
    cin >> bal;

    BankAccount account(n, accNum, bal);

    cout << "\nEnter amount to deposit: ";
    cin >> depositAmount;
    account.deposit(depositAmount);

    cout << "\nEnter amount to withdraw: ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    cout << "\nUpdated Account Information:" << endl;
    account.display();

    return 0;
}
