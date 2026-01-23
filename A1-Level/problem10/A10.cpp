#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string role;

    cin >> age ;
    cin >> role ;

    if(age<18 || role[0]=='s' || role[0]=='S') {
        cout << "20" << endl;
    }
    else {
        cout << "50" << endl;
    }

    return 0;


}
