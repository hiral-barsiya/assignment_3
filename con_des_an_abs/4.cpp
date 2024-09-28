/* Write a C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account. */


#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:

    void assignValues( int accNum, double initialBalance) {
        accountNumber = accNum;
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
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;

    account.assignValues( 123456,  1000.00);
    account.display();
    account.deposit(500);
    account.withdraw(300);
    account.withdraw(1500);
    account.display();

    return 0;
}
