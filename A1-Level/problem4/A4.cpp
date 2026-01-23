#include <iostream>
using namespace std;

int main() {
    float a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    if ( a>=5 && b>=20 && c>=25) {
        cout << "pass" << endl;
    }
    else {
        cout << "fail" << endl;
    }
    return 0;
}