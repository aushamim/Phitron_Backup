#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << j;
            }
        }
        else if (i > 1 && i < n)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == 1)
                {
                    cout << i;
                }
                else if (j > 1 && j < n)
                {
                    cout << " ";
                }
                else
                {
                    cout << j;
                }
            }
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                cout << n;
            }
        }
        cout << endl;
    }
    return 0;
}