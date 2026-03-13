#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string text;
    cin >> text;

    for (int i = static_cast<int>(text.size()) - 1; i >= 0; i--) {
        cout << static_cast<char>(tolower(static_cast<unsigned char>(text[i])));
    }

    return 0;

}