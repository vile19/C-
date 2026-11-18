#include <iostream>
using namespace std;

int main(){
    int num;
    int i = 1;
    int sum = 0;

    cout <<"please enter number" ;
    cin >> num;

    while(i <= num){
         sum = sum + i;
        i++;
    }
    
    cout<< "sum = " << sum << endl;

    return 0;

}