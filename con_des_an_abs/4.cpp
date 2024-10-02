/* Write a C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account. */

#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(int accNum, double bal) {
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
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    int accNum;
    double bal;
    double depositAmount, withdrawAmount;

    cout << "Enter account number: ";
    cin >> accNum;
    cout << "Enter balance: ";
    cin >> bal;

    BankAccount account(accNum, bal);

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
