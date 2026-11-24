#include <iostream>
#include <string>
using namespace std;

string company = "MERQO TECHNOLOGY";

int main(){
     
    int position = company.find("TECHNOLOGY");

    if (position != string::npos) {
        cout << "Found at index: " << position << endl;
    }
    else {
        cout << "Not found" << endl;
    }

    return 0;
}