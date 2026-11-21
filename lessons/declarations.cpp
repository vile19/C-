#include <iostream>
using namespace std;

// Function declaration
int add(int a, int b);

int main(){
    int result = add(10, 20);
    cout << result << endl;

    return 0;
}

// Function definition
int add(int a, int b){
    return a + b;
}