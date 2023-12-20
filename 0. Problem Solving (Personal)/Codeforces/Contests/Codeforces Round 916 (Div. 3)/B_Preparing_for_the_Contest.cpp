#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (k == 0)
        {
            for (int i = n; i > 0; i--)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else if (k == n - 1)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            int count = 0;
            for (int i = n - k; i <= n; i++)
            {
                if (count <= k)
                {
                    cout << i << " ";
                    count++;
                }
                else
                {
                    break;
                }
            }
            for (int i = n - k - 1; i > 0; i--)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}