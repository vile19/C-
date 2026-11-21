//perdict the out put
#include <iostream>
using namespace std;

void changeValue(int x){
    x = 100;
}

int main(){
    int number = 50;

    changeValue(number);

    cout << number << endl;

    return 0;
}