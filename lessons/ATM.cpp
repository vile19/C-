#include <iostream>
using namespace std;

void showMenu();
void checkBalance(double balance);
bool deposit(double &balance);
bool withdraw(double &balance);

void showMenu() {
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdrawal" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter choice: ";
}

void checkBalance(double balance) {
    cout << "Balance: " << balance << " birr" << endl;
}

bool deposit(double &balance) {
    double amount;

    cout << "Deposit amount: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Invalid amount" << endl;
        return false;
    }

    balance = balance + amount;
    cout << "Successful deposit!" << endl;
    cout << "New balance: " << balance << " birr" << endl;
    return true;
}

bool withdraw(double &balance) {
    double amount;

    cout << "Enter amount: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Invalid amount" << endl;
        return false;
    }
    else if (amount > balance) {
        cout << "Insufficient balance" << endl;
        return false;
    }

    balance = balance - amount;
    cout << "Successful withdrawal!" << endl;
    cout << "New balance: " << balance << " birr" << endl;
    return true;
}

int main() {
    double balance = 5000;
    int choice;
    int transactions = 0;

    do {
        showMenu();
        cin >> choice;

        if (choice == 1) {
            checkBalance(balance);
        }
        else if (choice == 2) {
            if (deposit(balance)) {
                transactions++;
            }
        }
        else if (choice == 3) {
            if (withdraw(balance)) {
                transactions++;
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
