#include <iostream>
#include <string>
using namespace std;
int main() {
    string name, surname;
    cin >> name >> surname;
    cout << name << " " << surname << endl;
    cout << name[0] << name[1] << surname[0] << surname[1];
    return 0;
}