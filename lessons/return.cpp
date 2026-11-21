#include <iostream>
using namespace std;

int subtract(int a, int b){
    
    return a - b;
}
int multiply(int c, int d){

    return c * d;

}

int main(){

    int a = 20;
    int b = 10;
    int c = 10;
    int d = 20;

    int reminder = subtract( a , b );
    cout << "reminder: " << reminder <<endl;

    int product = multiply( c, d);
    cout << "product: " << product << endl;

    return 0;
}