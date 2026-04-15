#include <iostream>
using namespace std;
class Bank {
public:
    int accNo;
    string name;
    float balance;

    static int count;

    void input() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Balance: ";
        cin >> balance;

        count++;
    }
    void show() {
        cout << "\nAcc No: " << accNo;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance << endl;
    }
};

int Bank::count = 0;
int main() {
    Bank a1, a2;
    a1.input();
    a2.input();
    a1.show();
    a2.show();
    cout << "\nTotal Accounts: " << Bank::count;

    return 0;
}