#include <iostream>
#include <string>  
using namespace std;

void greet(string name, int age){
    cout<< " hello " << name << endl;
    cout<<"your age is "<< age << endl;
}

int main(){
    greet("zerubabel",19);
    greet("eyueal",14);
    greet("frawol",20);

    return 0;
}