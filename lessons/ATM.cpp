
#include <iostream>
using namespace std;

// balance is the original account balance (passed by reference).
// amount is a copy of the deposit (passed by value).
void deposit(double &balance, double amount) {
    balance = balance + amount;
}

int main() {
    double balance = 5000;
    int choice;
    double amount;
    int transactions = 0;

    do {
        cout << "1. Check balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdrawal" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Balance: " << balance << endl;
        }
        else if (choice == 2) {
            cout << "Deposit amount: ";
            cin >> amount;

            if (amount <= 0) {
                cout << "Invalid amount" << endl;
            }
            else {
                deposit(balance, amount);
                transactions++;
                cout << "Successful deposit!" << endl;
                cout << "New balance: " << balance << endl;
            }
        }
        else if (choice == 3) {
            cout << "Enter amount: ";
            cin >> amount;

            if (amount <= 0) {
                cout << "Invalid amount" << endl;
            }
            else if (amount > balance) {
                cout << "Insufficient balance" << endl;
            }
            else {
                balance = balance - amount;
                transactions++;
                cout << "New balance: " << balance << endl;
            }
        }
        else if (choice == 4) {
            cout << "Thank you for banking with us" << endl;
            cout << "Total successful transactions: " << transactions << endl;
        }
        else {
            cout << "Invalid choice" << endl;
        }
    } while (choice != 4);

    return 0;
}
