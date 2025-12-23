#include <iostream>
using namespace std;

int main() {
    int money;
    cin >> money;

    int c10 = money /10;
    money = money % 10;

    int c5 = money / 5;
    money = money % 5;

    int c2 = money / 2;
    money = money % 2;

    int c1 = money;

    cout << "10 = " << c10 << endl;
    cout << "5 = " << c5 << endl;
    cout << "2 = " << c2 << endl;
    cout << "1 = " << c1 << endl;

    return 0;
}