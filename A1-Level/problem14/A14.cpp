#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;

    int min=99999;
    if (a<=min) {
        min = a;
    }
    if (b<=min) {
        min = b;
    }
    if (c<=min) {
        min = c;
    }
    cout << min << endl;
    return 0;

}