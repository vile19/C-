#include <iostream>
using namespace std;
    
int Balance = 5000;
int saving = 12000;

int* ptr = &Balance;



int main(){

    ptr = &saving;
    cout << "Balance: " << *ptr << endl;
    cout << "saving: " << ptr << endl;
    cout << "pointer stores: " << *ptr << endl;
    
    return 0;
}
