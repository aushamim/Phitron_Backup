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

        int count = 0;
        vector<char> v(n, 'P');
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R' && v[i] == 'P')
            {
                count++;
            }
        }

        if (count < ((n / 2) + 1))
        {
            int chk;
            chk = ((n / 2) + 1) - count;
            for (int i = n - 1; i >= 0; i--)
            {
                if (chk > 0 && s[i] == 'P')
                {
                    v[i] = 'S';
                    chk--;
                }
                else if (chk > 0 && s[i] == 'S')
                {
                    v[i] = 'R';
                    chk--;
                }
            }
        }

        for (auto x : v)
        {
            cout << x;
        }
        cout << endl;
    }
    return 0;
}