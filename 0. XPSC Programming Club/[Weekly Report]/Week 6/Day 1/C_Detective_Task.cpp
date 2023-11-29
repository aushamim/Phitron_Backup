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

        int c1 = 0, cq = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                c1++;
            }
            if (s[i] == '?')
            {
                cq++;
            }
        }

        int count = 0;
        if (cq == s.size())
        {
            count = s.size();
        }
        else if (c1 == 0)
        {
            for (int i = 0; i < s.size(); i++)
            {
                count++;
                if (s[i] == '0')
                {
                    break;
                }
            }
        }
        else
        {
            int i1 = -1, i0 = -1;
            for (int i = s.size() - 1; i >= 0; i--)
            {
                if (s[i] == '0')
                {
                    i0 = i;
                }
                if (i1 == -1 && s[i] == '1')
                {
                    i1 = i;
                    break;
                }
            }
            count = i0 == -1 ? s.size() - i1 : i0 - i1 + 1;
        }
        cout << count << endl;
    }
    return 0;
}