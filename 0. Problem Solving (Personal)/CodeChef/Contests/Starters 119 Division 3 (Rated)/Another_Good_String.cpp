#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        int mx = 1, count = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                count++;
                mx = max(mx, count);
            }
            else
            {
                count = 1;
            }
        }

        cout << mx << " ";
        for (int i = n; i < (n + q); i++)
        {
            char c;
            cin >> c;
            s += c;

            if (s[i] == s[i - 1])
            {
                count++;
                mx = max(mx, count);
            }
            else
            {
                count = 1;
            }
            cout << mx << " ";
        }

        cout << endl;
    }
    return 0;
}