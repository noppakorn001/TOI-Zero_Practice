#include <iostream>
using namespace std;

void callSymbol(string symbol) {
    if (symbol == "D" || symbol == "d") {
        cout << " of diamonds" << endl;
    }
    else if (symbol == "H" || symbol == "h") {
        cout << " of hearts" << endl;
    }
    else if (symbol == "S" || symbol == "s") {
        cout << " of spades" << endl;
    }
    else if (symbol == "C" || symbol == "c") {
        cout << " of clubs" << endl;
    }
}

void callName(string name) {
    if (name == "A" || name == "a") {
        cout << "ace";
    }
    else if (name == "J" || name == "j") {
        cout << "jack";
    }
    else if (name == "Q" || name == "q") {
        cout << "queen";
    }
    else if (name == "K" || name == "k") {
        cout << "king";
    }
    else {
        cout << name ;

    }
}

int main() {
    string card;
    cin >> card;
    string symbol;

    symbol = card[card.length()-1];
    //cout << symbol << endl;
    string name;
    name = card[0];
    //cout << name << endl;
    if (card.length() == 2) {
        callName(name);
        callSymbol(symbol);
    } else {
        cout << card[0];
        cout << card[1];
        callSymbol(symbol);
    }
    return 0;

}