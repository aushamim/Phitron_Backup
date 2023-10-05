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
        string s;
        cin >> s;

        int i = 0, r = 0, b = 0, w = 0;
        bool flag = false;
        while (i < n)
        {
            r += (s[i] == 'R'); // if(s[i]=='R'){e++}
            b += (s[i] == 'B');
            w += (s[i] == 'W');

            if (w)
            {
                flag |= ((r == 0 && b == 0) || (r >= 1 && b >= 1));

                if (!flag)
                {
                    break;
                }
                if (i < n - 1)
                {
                    flag = false;
                }
                r = b = w = 0;
            }
            i++;
        }
        flag |= ((r == 0 && b == 0) || (r >= 1 && b >= 1));
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}