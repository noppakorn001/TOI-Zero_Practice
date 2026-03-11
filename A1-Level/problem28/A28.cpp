#include <iostream>
using namespace std;

int main() {
    string num,reverse;
    cin >> num;
    //cout << num.length();
    for (int i=0; i <= num.length();i++) {
        reverse[i] =  num[num.length()-i-1];
    }

    for (int i=0; i < num.length(); i++) {
        cout << reverse[i] ;
    }
    return 0;
}