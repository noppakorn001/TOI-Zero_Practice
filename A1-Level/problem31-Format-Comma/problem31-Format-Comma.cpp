#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    cin >> num;
    num.insert(num.length()-3,",");
    cout << num << endl;
    return 0;
}