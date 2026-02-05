#include <iostream>
using namespace std;
int main() {
    int day,moth;
    cin >> day;
    cin >> moth;
    if ((moth==12 && day>=22) || (moth==1 && day<=19)) {
        cout << "capricorn" << endl;
    }
    if ((moth==1 && day>=20) || (moth==2 && day<=18)) {
        cout << "aquarius" << endl;
    }
    if ((moth==2 && day>=19) || (moth==3 && day<=20)) {
        cout << "pisces" << endl;
    }
    if ((moth==3 && day>=21) || (moth==4 && day<=19)) {
        cout << "aries" << endl;
    }
    if ((moth==4 && day>=20) || (moth==5 && day<=20)) {
        cout << "taurus" << endl;
    }
    if ((moth==5 && day>=20) || (moth==6 && day<=21)) {
        cout << "gemini" << endl;
    }
    if ((moth==6 && day>=22) || (moth==7 && day<=22)) {
        cout << "capricorn" << endl;
    }
    if ((moth==7 && day>=23) || (moth==8 && day<=22)) {
        cout << "leo" << endl;
    }
    if ((moth==8 && day>=23) || (moth==9 && day<=22)) {
        cout << "capricorn" << endl;
    }
    if ((moth==9 && day>=23) || (moth==10 && day<=23)) {
        cout << "virgo" << endl;
    }
    if ((moth==10 && day>=24) || (moth==11 && day<=21)) {
        cout << "scorpio" << endl;
    }
    if ((moth==11 && day>=22) || (moth==12 && day<=21)) {
        cout << "sagittarius" << endl;
    }
    return 0;
}