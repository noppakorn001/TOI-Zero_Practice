#include <iostream>
using namespace std;

int main()
{
    int o;
    int cal = 0;
    cin >> o;
    while (o != 5)
    {
        if (o == 1)
        {
            cal = cal + 100;
        }
        else if (o == 2)
        {
            cal = cal + 120;
        }
        else if (o == 3)
        {
            cal = cal + 200;
        }
        else if (o == 4)
        {
            cal = cal + 60 ;
        }
        cin >> o;
    }

    cout << "Bye Bye" << endl;
    cout << "Total Calories: " << cal << endl;
    return 0;
}