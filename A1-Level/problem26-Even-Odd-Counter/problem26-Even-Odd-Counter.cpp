#include <iostream>
using namespace std;

int main() {
    int num;
    int count_even = 0;
    int count_odd = 0 ;

    for (int i=1; i<=3 ;i++) {
        cin >> num;
        if (num%2==0) {
            count_even++;
        }
        else {
            count_odd++;
        }
    }

    cout << "even " << count_even << endl;
    cout << "odd " << count_odd << endl;
    return 0;


}