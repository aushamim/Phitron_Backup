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

        string ss = s.substr(2, n - 2);

        int ans = 1;
        for (int i = 0; i < n - 2; i++)
        {
            if (s[i] != ss[i])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}