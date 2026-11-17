// 0-100 unit costs 2birr
// 101-200 unit costs 3 birr
// above 200 unit cost 5 birr

#include <iostream>
using namespace std;

int main(){

    double unit;
    double cost;
    double total;

    cout << "enter unit:";
    cin >> unit;

    if (unit <= 0){
        cout << "invalid";
    }
    else if(unit <= 100){
        cost = 2;
        total = unit * cost;
        cout << "total usage: "<< total << "birr";
    }
    else if (unit <= 200){
        cost = 3;
        total = unit * cost;
        cout << "total usage: "<< total <<"birr";
    }
    else{
        cost = 5;
        total = unit * cost;
        cout << "total usage: "<< total <<"birr";
    }

    return 0;
}