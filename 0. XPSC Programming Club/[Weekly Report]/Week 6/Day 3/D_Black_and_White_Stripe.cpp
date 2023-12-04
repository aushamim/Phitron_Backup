#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;

        list<char> l;
        int wc = 0, ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (l.size() < k)
            {
                l.push_back(s[i]);
                if (s[i] == 'W')
                {
                    wc++;
                }
            }
            else
            {
                if (l.front() == 'W')
                {
                    wc--;
                }
                l.pop_front();
                l.push_back(s[i]);
                if (s[i] == 'W')
                {
                    wc++;
                }
            }
            if (l.size() >= k)
            {
                ans = min(ans, wc);
            }
        }
        ans = min(ans, wc);
        cout << ans << endl;
    }
    return 0;
}