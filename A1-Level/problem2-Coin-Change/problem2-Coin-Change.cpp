#include <iostream>
using namespace std;

int main() {
    int money;
    cin >> money;
    
    int c10 = money /10;
    cout << "10 = "<<c10 << endl;
    
    int c5;
    c5 = (money -((c10)*10))/5;
    cout << "5 = "<<c5 << endl;

    int c2;
    c2 = (money - (c10*10) -(c5*5)) / 2;
    cout << "2 = "<<c2 << endl;

    int c1;
    c1 = (money - (c10*10) -(c5*5) - (c2*2)) ;
    cout << "1 = " <<c1 << endl;

    return 0;
    
}