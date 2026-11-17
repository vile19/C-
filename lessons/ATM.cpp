//Option 1 displays the balance.
//Option 2 asks for the withdrawal amount.
//Reject amounts greater than the balance
//Reject zero and negative amounts.
//Deduct successful withdrawals from the balance.
//Option 3 exits with a goodbye message.
//Handle invalid menu selections.

#include <iostream>
using namespace std;

int main(){
    double balance = 5000;
    int choice;
    double amount;

    cout << "1. Check balance" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Exit" << endl;
    cout << "enter choice: ";
    cin >> choice;

    if (choice == 1){
        cout << "balance: " << balance;
    }
    else if (choice == 2){
        cout << "enter amount: ";
        cin >> amount;

        if (amount <= 0){
            cout << "invalid amount";
        }
        else if (amount > balance){
            cout << "insufficient balance";
        }
        else{
            balance = balance - amount;
            cout << "new balance: " << balance;
        }
    }
    else if (choice == 3){
        cout << "goodbye";
    }
    else{
        cout << "invalid choice";
    }

    return 0;
}
