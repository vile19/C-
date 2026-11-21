#include <iostream>
using namespace std;

void showBalance(double balance) {
    cout << "Balance: " << balance << endl;
}

int main() {
    double balance = 5000;

    showBalance(balance);

    return 0;
}
