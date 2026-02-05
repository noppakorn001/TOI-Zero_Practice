#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char id[9];
    cin >> id;
    //cout << id[2] << endl;
    if (id[2]=='1' && id[3]=='6') {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;

}