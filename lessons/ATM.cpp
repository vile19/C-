
#include <iostream>
using namespace std;

int main(){
    double balance = 5000;
    int choice;
    double amount;
    int transactions = 0;
    double deposit;
    do{
        cout << "1. Check balance" << endl;
        cout << "2. deposit" << endl;
        cout << "3. withdrawl" << endl;
        cout << "4. Exit" << endl;
        cout << "enter choice: ";
        cin >> choice;

        if (choice == 1){
            cout << "balance: " << balance;
        }
        else if(choice == 2){
            cout << "deposit amount: ";
            cin >> deposit;

            if (deposit <= 0){
                cout << "invalid amount" << endl;
            }
            else{
                balance = balance + deposit;
                transactions++;
                cout << "successful deposit!" << endl;
                cout << "new balance: " << balance << endl;
            }
        }
        else if (choice == 3){
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
                transactions++;
                cout << "new balance: " << balance;
            }
        }
        else if (choice == 4){
        cout << "Thank you for banking with us";<< endl;
        cout << "Total successful transactions: " << transactions << endl;
    }
    else{
        cout << "invalid choice";
    }
} while(choice != 4);

return 0;
}
