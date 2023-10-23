#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            for (int i = n; i > 0; i--)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            if (n == 3)
            {
                cout << -1 << endl;
            }
            else if (n == 5)
            {
                cout << "5 4 1 2 3" << endl;
            }
            else
            {
                for (int i = n; i > 0; i--)
                {
                    if (i == (n / 2) + 1)
                    {
                        cout << i + 1 << " ";
                    }
                    else if (i == (n / 2) + 2)
                    {
                        cout << i - 1 << " ";
                    }
                    else
                    {
                        cout << i << " ";
                    }
                }
                cout << endl;
            }
        }
    }
    return 0;
}