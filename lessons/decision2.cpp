#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "enter your age?";
    cin >> age;

    if (age , 0){
        cout << "invalid";
    }

    else if (age>=18){
        cout << "adult" ;
    }
    else{
        cout << "minor";
    }

    return 0;
}