#include <iostream>
using namespace std;

int main()
{
    int num, num_M, numA;
    cin >> num;

    num_M = num / 1000;

    for (int i = 1; i <= num_M; i++)
    {
        cout << "M";
    }

    numA = num - (num_M * 1000);

    int num_C = numA / 100;
    if (num_C == 9)
    {
        cout << "CM";
    }
    else if (num_C >= 5)
    {
        cout << "D";
        for (int i = 1; i <= num_C - 5; i++)
        {
            cout << "C";
        }
    }
    else if (num_C == 4)
    {
        cout << "CD";
    }
    else
    {
        for (int i = 1; i <= num_C; i++)
        {
            cout << "C";
        }
    }

    int numB = numA % 100;
    int num_X = numB / 10;
    if (num_X == 9)
    {
        cout << "XC";
    }
    else if (num_X >= 5)
    {
        cout << "L";
        for (int i = 1; i <= num_X - 5; i++)
        {
            cout << "X";
        }
    }
    else if (num_X == 4)
    {
        cout << "XL";
    }
    else
    {
        for (int i = 1; i <= num_X; i++)
        {
            cout << "X";
        }
    }

    int numC = numB % 10;
    if (numC == 9)
    {
        cout << "IX";
    }
    else if (numC >= 5)
    {
        cout << "V";
        for (int i = 1; i <= numC - 5; i++)
        {
            cout << "I";
        }
    }
    else if (numC == 4)
    {
        cout << "IV";
    }
    else
    {
        for (int i = 1; i <= numC; i++)
        {
            cout << "I";
        }
    }

    return 0;
}