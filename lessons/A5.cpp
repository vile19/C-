#include <iostream>
using namespace std;

int number[5] = {10, 20, 30, 40, 50};
int* ptr = number;

void reverseArray(int* arr, int size){
    int* start = arr;
    int* end = arr + size - 1;

    while (start < end){
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

void printArray(int* arr, int size ){
    for (int i = 0; i < size; i++) {
        
        cout << *(arr + i) << " "; 
    }
    cout << endl;

}

int main(){

    for (int i = 0; i < 5; i++) {
        cin >> *(ptr + i);
    }

    cout << "original: ";
    printArray(ptr, 5);

    reverseArray(ptr, 5);
    
    cout << "reversed: ";
    printArray(ptr, 5);
    
    return 0;

}