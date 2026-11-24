#include <iostream>
#include <string>
using namespace std;

string company = "MERQO SOFTWARE";

int main(){
     
    company.replace(6, 8, "TECHNOLOGY");

    cout << company << endl;

    return 0;
}