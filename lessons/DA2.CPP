#include <iostream>
using namespace std;

int main() {

    int* numbers = new int[5];

    for (int i = 0; i < 5; i++) {
        numbers[i] = (i + 1) * 10;
    }

    int total = 0;
    int largest = numbers[0];
    int smallest = numbers[0];

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << endl;

        total += numbers[i];

        if (numbers[i] > largest) {
            largest = numbers[i];
        }
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    double average = total / 5.0;

    cout << "largest: " << largest << endl;
    cout << "smallest: " << smallest << endl;
    cout << "total: " << total << endl;
    cout << "average: " << average << endl;

    delete[] numbers;
    numbers = nullptr;

    return 0;
}