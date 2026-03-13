#include <iostream>
using namespace std;

int main() {
    float temperature;
    char type[1];
    cin >> temperature;
    cin >> type[0];
    if (type[0]=='C' || type[0]=='c') {
        if (temperature <= 0) {
            cout << "solid" << endl; ;
        }
        else if (0 < temperature && temperature < 100) {
            cout << "liquid" << endl; ;
        }
        else if (temperature > 100) {
            cout << "gas"<< endl; ;
        }

    }

    if (type[0]=='F' || type[0]=='f') {
        if (temperature <= 32) {
            cout << "solid" << endl; ;
        }
        else if (32 < temperature && temperature < 212) {
            cout << "liquid" << endl; ;
        }
        else if (temperature > 212) {
            cout << "gas"<< endl; ;
        }

    }

    return 0;
}