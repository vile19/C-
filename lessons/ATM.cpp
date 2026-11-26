#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 100;

void showMenu();
void checkBalance(double balance);
void showStats(double transactions[0], int count);
bool deposit(double& balance, 
    double* transactions[0], 
    int&  count);
bool withdraw(double &balance, 
    double* transactions[0], 
    int& count);

void showMenu() {
    cout << "\n1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdrawal" << endl;
    cout << "4. View transactions and statistics" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter choice: ";
}

void checkBalance(double balance) {
    cout << "Balance: " << balance << " birr" << endl;
}

void showStats(double transactions[], int count) {
    if (count == 0) {
        cout << "\nNo transaction yet" << endl;
        return;
    }
    double totalDeposits = 0;
    double totalWithdrawals = 0;
    double sumAmounts = 0;
    double largest = fabs(transactions[0]);
    double smallest = fabs(transactions[0]);

    cout << "\nTransactions:" << endl;
    for (int i = 0; i < count; i++) {
        double amount = fabs(transactions[i]);

        if (transactions[i] > 0) {
            cout << i + 1 << ". Deposit    +" << amount << " birr" << endl;
            totalDeposits = totalDeposits + amount;
        } else {
            cout << i + 1 << ". Withdrawal -" << amount << " birr" << endl;
            totalWithdrawals = totalWithdrawals + amount;
        }

        sumAmounts = sumAmounts + amount;

        if (amount > largest) {
            largest = amount;
        }
        if (amount < smallest) {
            smallest = amount;
        }
    }

    double average = sumAmounts / count;

    cout << "\nTotal deposits: " << totalDeposits << " birr" << endl;
    cout << "Total withdrawals: " << totalWithdrawals << " birr" << endl;
    cout << "Net total: " << totalDeposits - totalWithdrawals << " birr" << endl;
    cout << "Largest transaction: " << largest << " birr" << endl;
    cout << "Smallest transaction: " << smallest << " birr" << endl;
    cout << "Average transaction: " << average << " birr" << endl;
}

bool deposit(double &balance, double transactions[], int &count) {
    double amount;

    cout << "Deposit amount: ";
    cin >> amount;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid amount" << endl;
        return false;
    }
    if (amount <= 0) {
        cout << "Invalid amount" << endl;
        return false;
    }
    if (count >= MAX) {
        cout << "Transaction list is full" << endl;
        return false;
    }

    balance = balance + amount;
    transactions[count] = amount;      
    count++;

    cout << "Successful deposit!" << endl;
    cout << "New balance: " << balance << " birr" << endl;
    return true;
}

bool withdraw(double &balance, double transactions[], int &count) {
    double amount;

    cout << "Enter amount: ";
    cin >> amount;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid amount" << endl;
        return false;
    }
    if (amount <= 0) {
        cout << "Invalid amount" << endl;
        return false;
    }
    if (amount > balance) {
        cout << "Insufficient balance" << endl;
        return false;
    }
    if (count >= MAX) {
        cout << "Transaction list is full" << endl;
        return false;
    }

    balance = balance - amount;
    transactions[count] = -amount;     // withdrawals stored as negative
    count++;

    cout << "Successful withdrawal!" << endl;
    cout << "New balance: " << balance << " birr" << endl;
    return true;
}

int main() {
    double balance = 5000;
    int choice;
    int successfulTransactions = 0;

    // The first five are treated as deposits
    double transactions[MAX] = {500, 1200, 300, 750, 250};
    int count = 5;


    do {
        showMenu();
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            choice = 0;
        }

        if (choice == 1) {
            checkBalance(balance);
        }
        else if (choice == 2) {
            if (deposit(balance, transactions, count)) {
                successfulTransactions++;
            }
        }
        else if (choice == 3) {
            if (withdraw(balance, transactions, count)) {
                successfulTransactions++;
            }
        }
        else if (choice == 4) {
            showStats(transactions, count);
        }
        else if (choice == 5) {
            cout << "Thank you for banking with us" << endl;
            cout << "Total successful transactions: " << successfulTransactions << endl;
        }
        else {
            cout << "Invalid choice" << endl;
        }
    } while (choice != 5);

    return 0;
}