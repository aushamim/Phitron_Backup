#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        for (char c = s[0]; c >= 'a'; c--)
        {
            if (c == s[0])
            {
                continue;
            }
            cout << c << s[1] << endl;
        }
        for (char c = s[0]; c <= 'h'; c++)
        {
            if (c == s[0])
            {
                continue;
            }
            cout << c << s[1] << endl;
        }
        for (char c = s[1]; c >= '1'; c--)
        {
            if (c == s[1])
            {
                continue;
            }
            cout << s[0] << c << endl;
        }
        for (char c = s[1]; c <= '8'; c++)
        {
            if (c == s[1])
            {
                continue;
            }
            cout << s[0] << c << endl;
        }
    }
    return 0;
}