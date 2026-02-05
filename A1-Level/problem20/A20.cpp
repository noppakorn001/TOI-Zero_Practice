#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a<b) {
        if(b<c) {
            cout << "increasing" << endl;
        } else {
            cout << "neither" << endl;
        }
    } else if(a>b) {
        if(b>c) {
            cout << "decreasing" << endl;
        } else {
            cout << "neither" << endl;
        }
    } else {
        cout << "neither" << endl;
    }
    return 0;
}