#include <iostream>
using namespace std;

int main() {
    int x,y;
    cin >> x;
    cin >> y;
    if (x%y==0) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}