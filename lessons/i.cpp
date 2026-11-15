#include <iostream>
using namespace std;

int main(){
    int i;
     
    cout<<"enter your number?";
    cin>>i;
    
    if (i == 0){
        cout<<"zero";
    }
    else if (i > 0){
        cout<<"positive";
    }
    else{
        cout<<"negative";
    }

    if (i % 2 == 0) {
        cout<<" even";
    }
    else {
        cout<<" odd";
    }

    return 0;
}