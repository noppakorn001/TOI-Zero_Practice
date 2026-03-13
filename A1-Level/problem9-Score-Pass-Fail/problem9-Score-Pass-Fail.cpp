#include <iostream>
using namespace std;

int main() {
    float a,b,sum;
    cin >> a;
    cin >> b;
    cout << a+b << endl;
    if (a+b>=50) {
        cout << "pass" << endl;
    }
    else {
        cout << "fail" << endl;
    }
    return 0;

}