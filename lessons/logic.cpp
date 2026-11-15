#include <iostream>
using namespace std;

int main() {
    int age;
    bool haslicense = true;

    cout << "enter your age";
    cin >> age;

    if(age >= 18 && haslicense){
        cout <<"legal driver age and has license";
    }

    else{
        cout << "illegal age with fake license";
    }

    return 0;
}