#include <iostream>
#include <string>
using namespace std;

string bankname = "========== MERQO BANK ==========";
string company = "MERQO TECHNOLOGY";
string customername;
int age;

int main(){
    
    cout << bankname << endl;

    cout << "enter age: ";
    cin >> age;

    cin.ignore();

    cout << "Enter Full Name: ";
    getline(cin, customername);

    cout << "\nCUSTOMER INFORMATION" << endl;
    cout << "Customer Name: " << customername << endl;
    cout << "charcter count: " <<customername.length() << endl;
    cout << "age: " << age << endl;

    int position = company.find("TECHNOLOGY");
    cout << "in index: "<< position << endl;

    string result = company.substr(6, 10);
    cout <<"left "<< result << endl;
    return 0;
}