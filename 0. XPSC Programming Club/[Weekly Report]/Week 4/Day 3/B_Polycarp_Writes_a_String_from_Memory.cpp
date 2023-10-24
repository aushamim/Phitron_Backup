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

        int count = 1;
        char c[3];
        memset(c, '-', sizeof c);

        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (c[j] == '-' && (c[0] != s[i] && c[1] != s[i] && c[2] != s[i]))
                {
                    c[j] = s[i];
                    break;
                }
            }

            bool full = true;
            for (int j = 0; j < 3; j++)
            {
                if (c[j] == '-')
                {
                    full = false;
                    break;
                }
            }

            if (full && (c[0] != s[i] && c[1] != s[i] && c[2] != s[i]))
            {
                memset(c, '-', sizeof c);
                c[0] = s[i];
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}