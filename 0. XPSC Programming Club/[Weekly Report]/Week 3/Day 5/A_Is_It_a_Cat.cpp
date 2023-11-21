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
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = 'a' + (s[i] - 'A');
            }
        }

        string ss = "";
        ss += s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] != ss[ss.length() - 1])
            {
                ss += s[i];
            }
        }
        cout << (ss == "meow" ? "YES" : "NO") << endl;
    }
    return 0;
}