#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string name,surname,last_surname;
    int age,last_age;
    getline(cin,name);
    getline(cin,surname);
    cin >> age;

    last_surname = surname[(surname.length())-1];
    //cout << last_surname << endl;
    last_age = age%10;
    
    if (name.length()>5 && surname.length()>5) {
        cout << name[0] << name[1] << last_surname << last_age << endl;
    }else {
        cout << name[0] << age << last_surname << endl;
    }
    return 0;
}