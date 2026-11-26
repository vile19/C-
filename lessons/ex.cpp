#include <iostream>
using namespace std;

int* ptr = new int(5000);



int main(){
    
    *ptr = 7000;
    
    cout << *ptr << endl;
    
    delete ptr;

    ptr = nullptr;
    if (ptr == nullptr) {
    cout << "No memory address stored";
    }

}