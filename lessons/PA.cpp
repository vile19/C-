#include <iostream>
using namespace std;

int number[5] = {15, 25, 35, 45, 55};
int* ptr = number;

void analyzeArray(int* arr, int size, int &total, int &largest, int &smallest) {
    total = 0;
    largest = *arr;
    smallest = *arr;

    for (int i = 0; i < size; i++) {
        int value = *(arr + i);

        total += value;

        if (value > largest) {
            largest = value;
        }
        if (value < smallest) {
            smallest = value;
        }
    }
}
int main(){

    int total = 0;
    int largest = 0;
    int smallest = 0;

    analyzeArray(ptr, 5, total, largest, smallest);

    double average = total / 5.0;

    cout << "largest: " << largest << endl;
    cout << "smallest: " << smallest << endl;
    cout << "total: " << total << endl;
    cout << "average: " << average << endl;


    return 0;
} 