#include <iostream>
using namespace std;

int main() {
    string id;
    cin >> id;

    if (id.length()==13) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
    return 0;

}