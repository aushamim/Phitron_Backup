#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int st = -1, en = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                if (st == -1)
                {
                    st = i;
                }
                else
                {
                    en = i;
                }
            }
        }

        if (st == -1 && en == -1)
        {
            cout << 0 << endl;
        }
        else if (en == -1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << en - st + 1 << endl;
        }
    }
    return 0;
}