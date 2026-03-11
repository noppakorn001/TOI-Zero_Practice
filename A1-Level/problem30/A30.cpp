#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int a, b;
    if (n == 1)
    {
        cin >> a >> b;
        if (a >= b)
        {
            sum += a;
            //cout << a;
        }
        else
        {
            sum += b;
            //cout << b;
        }
    }

    else
    {
        for (int i = 1; i <= n; i++)
        {
            cin >> a >> b;
            if (i < n)
            {
                if (a >= b)
                {
                    sum += a;
                    cout << a;
                }
                else
                {
                    sum += b;
                    cout << b;
                }
                cout << " + ";
            }
            else
            {
                if (a >= b)
                {
                    sum += a;
                    cout << a;
                }
                else
                {
                    sum += b;
                    cout << b;
                }
                cout << " = ";
            }
        }
    }

    cout << sum << endl;
}