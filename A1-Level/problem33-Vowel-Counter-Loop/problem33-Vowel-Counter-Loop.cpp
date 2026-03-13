#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int vowels = 0;
    string text;

    for (int i=0;i<n;i++) {
        cin >> text[i];
        if (text[i] == 'A' || text[i] == 'E' || text[i] == 'O' || text[i] == 'U' || text[i] == 'I'  ) {
            vowels++;
        }
    }
    cout << vowels << endl;
}