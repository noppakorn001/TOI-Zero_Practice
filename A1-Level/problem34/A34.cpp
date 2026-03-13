#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num;
    int m = num;
    
    for (int i=1;i<=n;i++) {
        cin >> num;
        if (num<=m) {
            m =num;
        }
    }
    cout << m << endl;
    return 0;
}