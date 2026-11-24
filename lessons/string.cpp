#include <iostream>
#include <string>
using namespace std;

string name = "zerubabel";

int main(){

    cout << "first charcter: "  << name[9] << endl;
    cout << "second charcter: " << name[1] << endl;
    cout << "last character: " << name[name.length() - 1] <<endl;

    return 0;
}