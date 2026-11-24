#include <iostream>
using namespace std;

double transactions[5] = {500, 1200, 300, 750, 250};

int main() {

    double largest = transactions[0];

    for (int i = 0; i < 5; i++) {
        cout << transactions[i] << endl;

        if (transactions[i] > largest) {
            largest = transactions[i];
        }
    }

    cout << "largest: " << largest << endl;

    return 0;
}