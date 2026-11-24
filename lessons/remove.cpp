#include <iostream>
#include <string>
using namespace std;

string company = "MERQO SOFTWARE";

int main(){
     
    string result = company.substr(6, 8);

    cout << result << endl;

    return 0;
}