#include <iostream>
using namespace std;

int main() {
    string text;
    cin >> text;
    int vowel = 0;

    for (int i=0 ; i < text.length() ; i++) {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o'|| text[i] == 'u' ) {
            vowel++;
        }
    }
    cout << vowel << endl;
    return 0;
}