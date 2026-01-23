#include <iostream>
using namespace std;

int main() {
    int moth,day;
    cin >> moth;
    cin >> day;

    if(moth<=3) {
        if (moth%3==0 && day>=21) {
        cout << "spring" << endl;
        }
        else {
            cout << "winter" << endl;
        }
    }

    if(moth>=4 && moth<=6) {
        if (moth%3==0 && day>=21) {
        cout << "summer" << endl;
        }
        else {
            cout << "spring" << endl;
        }
    }

    if(moth>=7 && moth<=9) {
        if (moth%3==0 && day>=21) {
        cout << "fall" << endl;
        }
        else {
            cout << "summer" << endl;
        }
    }

    if(moth>=9 && moth<=12) {
        if (moth%3==0 && day>=21) {
        cout << "winter" << endl;
        }
        else {
            cout << "fall" << endl;
        }
    }
    return 0;

}