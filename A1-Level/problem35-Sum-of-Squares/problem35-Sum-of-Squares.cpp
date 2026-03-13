#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0;
    cin >> n;
    double m;

    for (int i=1; i<=n;i++) {
        m = i*i;
        sum += m;
    }

    cout << sum << endl;
    return 0;
}