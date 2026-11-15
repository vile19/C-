#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "enter your score";
    cin >> score;

    if(score < 0 || score > 100){
        cout << "invalid score";
    }
    else if(score >=90){
        cout << "A";
    }
    else if (score >=80){
        cout << "B";
    }
    else if (score >=70){
        cout << "c";
    }
    else if (score >= 60){
        cout << "d";
    }
    else {
        cout << "f";
    }
}
