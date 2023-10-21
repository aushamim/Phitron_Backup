#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> k >> n;

        int val = 1, diff = 1;
        for (int i = 0; i < k; i++)
        {
            cout << val << " ";

            if ((n - (val + diff)) >= (k - (i + 1 + 1)))
            {
                val += diff;
                diff++;
            }
            else
            {
                val++;
            }
        }
        cout << endl;
    }
    return 0;
}