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
        string s1, s2;
        cin >> s1 >> s2;

        int c1 = 0, c2 = 0, draw = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == s2[i])
            {
                draw++;
            }
            else if (s1[i] == 'R' && s2[i] == 'S')
            {
                c1++;
            }
            else if (s1[i] == 'S' && s2[i] == 'R')
            {
                c2++;
            }
            else if (s1[i] == 'S' && s2[i] == 'P')
            {
                c1++;
            }
            else if (s1[i] == 'P' && s2[i] == 'S')
            {
                c2++;
            }
            else if (s1[i] == 'P' && s2[i] == 'R')
            {
                c1++;
            }
            else if (s1[i] == 'R' && s2[i] == 'P')
            {
                c2++;
            }
        }

        if (c1 == c2)
        {
            cout << 1 << endl;
        }
        else if (c1 > c2)
        {
            cout << 0 << endl;
        }
        else if (c1 < c2)
        {
            cout << (((n - draw) / 2 + 1) - c1) << endl;
        }
    }
    return 0;
}