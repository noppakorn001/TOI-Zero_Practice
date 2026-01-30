#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char text[6];
    cin >> text;
    int count = 1;
    for (int i=1;i<=5;i++) {
        if (i<5 && text[i]==text[i-1]) {
            count++;
        }
        else {
            cout << count << text[i-1];
            count = 1;
        }
    }
    return 0;

}