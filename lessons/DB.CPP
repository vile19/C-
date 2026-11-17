//Packages up to 2 kg cost 100 birr per kg.
//Packages above 2 kg and up to 5 kg cost 80 birr per kg.
//Packages above 5 kg cost 60 birr per kg.
#include <iostream>
using namespace std;

int main (){

    double weight;
    double rate;
    double total;

    cout << "enter package weight:";
    cin >> weight;

    if (weight <= 0){
        cout << "invalid";   
    }
    else if(weight <= 2){
        rate = 80;
        total = weight * rate;
        cout << "Delivery cost: "<< total << "birr";
    }
    else{
        rate = 60;
        total = weight * rate;
        cout << "dilvery cost:" << total <<"birr";
    }

    return 0;
}