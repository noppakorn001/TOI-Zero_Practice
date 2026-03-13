#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m=0;
    m = n ;

    //cout << n%10 ;

    for (int i=0; i<=n;i++) {
        //cout << m << endl;
        if (m%10==0) {
            cout << m << " " ;
        }
        m--;
    }

    return 0;
}