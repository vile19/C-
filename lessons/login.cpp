#include <iostream>
#include <string>
using namespace std;

int main(){
    string username;
    int pin;

    cout << "username: ";
    cin >> username;

    cout << "PIN: ";
    cin >> pin;

    if (username == "zeru" && pin == 1234){
        cout << "authorized";
    }
    else{
        cout << "denied";
    }

    return 0;
}
