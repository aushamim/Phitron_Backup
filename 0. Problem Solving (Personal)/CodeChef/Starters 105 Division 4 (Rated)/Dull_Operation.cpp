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

        bool chk = false;
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                if (((i | j) * (i ^ j)) == n)
                {
                    cout << i << " " << j << endl;
                    chk = true;
                    break;
                }
            }
            if (chk)
            {
                break;
            }
        }
    }
    return 0;
}