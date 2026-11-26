#include <iostream>
using namespace std;

int balance = 5000;
int* ptr = &balance;
int& ref = balance;

void deposit(int* ptr){
    *ptr += 2000;
}
void withdrawl(int& ref){
    ref -= 1000;
}
int main() {

    cout << "Initial balance: " << balance << endl;
    
    deposit(&balance);
    
    cout << "after deposit: " << balance << endl;
    
    withdrawl(balance);
    
    cout<< "after withdrawl: " << balance << endl;
   

    return 0;
}