#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        if (x >= (1 - n) && x <= (1 + n))
        {
            if (x <= 0)
            {
                int count = 1;
                while (n--)
                {
                    if (count == x)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << "-";
                        count--;
                    }
                }
            }
            else
            {
                int count = 1;
                while (n--)
                {
                    if (count == x)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << "+";
                        count++;
                    }
                }
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}