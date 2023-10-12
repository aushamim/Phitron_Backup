#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int prev = 0, r = -1, c = -1;
        for (int i = 0; i < 8; i++)
        {
            string s;
            cin >> s;

            if (r == -1)
            {
                int count = 0;
                for (int j = 0; j < 8; j++)
                {
                    if (s[j] == '#')
                    {
                        count++;
                        c = j;
                    }
                }
                if (prev == 2 && count == 1)
                {
                    r = i;
                }
                prev = count;
            }
        }
        cout << r + 1 << " " << c + 1 << endl;
    }
    return 0;
}