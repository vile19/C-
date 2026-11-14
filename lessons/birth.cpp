#include <iostream>
using namespace std;

int main() {
    int birth_year;
    cout << "Enter your birth year: ";
    cin >> birth_year;
    int current_year = 2026;
    int age = current_year - birth_year;
    cout << "You are " << age << " years old." << endl;
    return 0;
}