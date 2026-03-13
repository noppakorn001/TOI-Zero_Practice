#include <iostream>
using namespace std;

int main() {
    int n,nx,ny;
    cin >> n;
    for (int i=1;i<=n;i++) {
        cout << "*" ;
    }
    cout << endl;

    nx = n-2;
    //cout << nx ;
    for (int i=1;i<=nx;i++) {
        cout << "*";
    }

    cout << endl;
    ny = nx-2;
    //cout << ny ;
    for (int i=1;i<=ny;i++) {
        cout << "*";
    }


}