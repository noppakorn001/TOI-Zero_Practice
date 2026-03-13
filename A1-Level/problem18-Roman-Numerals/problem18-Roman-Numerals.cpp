#include <iostream>
using namespace std;

string convert_roman(int number) {
    string romans[] = {"X","V","I"};
    int values[] = {10,5,1};

    string result = "";
    // Loop through the values and corresponding Roman symbols
    for(int i=0;i<3;++i) {
        // While the current number is greater than or equal to the value
        while(number-values[i]>=0) {
            // Append the Roman symbol to the result and subtract the value from the number
            result += romans[i];
            number -= values[i];
        }
    }
    return result;
}

int main() {
    int number;
    cin >>number;

    if (number >= 1 && number < 9 && number!=4) { 

        cout << convert_roman(number) << endl; 
    }
    else if (number < 0) {
        cout << "Error : Please input positive number" << endl;
    }
    else if (number==9) {
        cout << "IX" << endl;
    }
    else if (number==4) {
        cout << "IV" << endl;
    }
    else {
        cout << "Error : Out of range" << endl;
    }

    return 0;
}
