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
        string s;
        cin >> s;

        bool pre = true;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                pre = false;
            }
        }

        if (pre)
        {
            cout << 0 << endl;
        }
        else
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = i; j < n; j++)
                {
                    if (((s[i] == '1' && s[j] == '0') || (s[i] == '0' && s[j] == '1')) && ((i + 1) % k == (j + 1) % k))
                    {
                        s[i] = '1';
                        s[j] = '1';
                        count++;
                    }
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}