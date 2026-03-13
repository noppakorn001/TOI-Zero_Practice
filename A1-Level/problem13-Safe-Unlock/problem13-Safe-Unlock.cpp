#include <iostream>
using namespace std;

int main() {
    char p[1];
    int pin;
    int pass = 4567;

    cin >> p;
    cin >> pin;

    if(p[0]=='H') {
        if (pin==pass) {
            cout << "safe unlocked" << endl;
        } else {
            cout << "safe locked - change digit" << endl;
        }
    } else if (pin==pass) {
        if (p[0]!='H') {
            cout <<  "safe locked - change char" << endl;
        }
    } else {
        cout << "safe locked" << endl;
    }

    return 0;


}