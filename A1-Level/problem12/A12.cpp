#include <iostream>
using namespace std;

int main() {
    int number,remainder,ref;
    int reverse =0;
    string op;

    cin >> number;
    cin >> op;
    ref = number;

    while(number!=0) {
        remainder = number % 10;
        reverse = (reverse*10) + remainder;
        number /= 10;
    }

    if(op[0]=='+') {
        cout << ref << " " << op[0] << " " << reverse << " = " << ref+reverse << endl;
    } else if(op[0]=='*') {
        cout << ref << " " << op[0] << " " << reverse << " = " << ref*reverse << endl;

    }
    return 0;
}
