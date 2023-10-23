#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;

    int frq[2] = {0};
    for (int i = 0; i < n; i++)
    {
        frq[s[i] - 'a']++;
    }

    if (frq[0] == frq[1])
    {
        cout << 0 << endl;
        cout << s << endl;
    }
    else
    {
        int sum = 0, i = 0;
        while (frq[0] != frq[1])
        {
            if (frq[0] > frq[1])
            {
                if (s[i] == s[i + 1])
                {
                }
                sum++;
                frq[0]--;
                frq[1]++;
            }
            else
            {
                sum++;
                frq[0]++;
                frq[1]--;
            }
        }
        cout << sum << endl;
    }

    return 0;
}