#include <iostream>
using namespace std;

void first (int cc) {
    if (cc <= 1500) {
        cout << "1250" << endl ;
    }
    else if (1500 < cc <= 2000) {
        cout << "1400" << endl;
    }
    else if (cc > 2000) {
        cout << "2000" << endl ;
    }
}

void second (int cc) {
    if (cc <= 1500) {
        cout << "1100" << endl ;
    }
    else if (1500 < cc && cc <= 2000) {
        cout << "1300" << endl ;
    }
    else if (cc > 2000) {
        cout << "1700" << endl;
    }
}

void thrid (int cc) {
    if (cc <= 1500) {
        cout << "1000" << endl ;
    }
    else if (1500 < cc && cc <= 2000) {
        cout << "1200" << endl;
    }
    else if (cc > 2000) {
        cout << "1500" << endl ;
    }
}




int main() {

    int year,cc ;
    cin >> year;
    cin >> cc ;

    if (1 <= year && year <= 1990) {
        first(cc);
    }
    else if (1991 <= year && year <= 1999) {
        second(cc);
    }
    else if ( 1991 <= year && year >= 2000) {
        thrid(cc);
    }

    return 0;

}