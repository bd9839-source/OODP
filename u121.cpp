#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Invalid amount\n";
            return;
        }
        balance += amount;
        cout << "Deposited Successfully\n";
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid amount\n";
            return;
        }
        if (amount > balance) {
            cout << "Insufficient Balance\n";
        } else {
            balance -= amount;
            cout << "Withdrawn Successfully\n";
        }
    }

    void showBalance() {
        cout << "Balance: ₹" << balance << endl;
    }
};

int main() {
    BankAccount acc;
    int choice;
    double amt;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Balance\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter amount: ";
                cin >> amt;
                acc.deposit(amt);
                break;

            case 2:
                cout << "Enter amount: ";
                cin >> amt;
                acc.withdraw(amt);
                break;

            case 3:
                acc.showBalance();
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while(choice != 4);

    return 0;
}