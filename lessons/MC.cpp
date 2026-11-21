#include <iostream>
using namespace std;

double add(double a, double b);

double subtract(double a, double b);

double multiply(double a, double b);

double divide(double a, double b);

int main() {
    double a, b;

    cout << "first number: ";
    cin >> a;

    cout << "second number: ";
    cin >> b;

    double sum = add(a, b);
    cout << "sum: " << sum << endl;

    double difference = subtract(a, b);
    cout << "difference: " << difference << endl;

    double product = multiply(a, b);
    cout << "product: " << product << endl;

    if (b == 0) {
        cout << "invalid" << endl;
    } else {
        double quotient = divide(a, b);
        cout << "quotient: " << quotient << endl;
    }

    return 0;
}
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}