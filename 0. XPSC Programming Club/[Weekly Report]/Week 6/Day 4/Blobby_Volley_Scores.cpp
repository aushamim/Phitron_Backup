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

        int a = 0, b = 0;
        bool sa = true, sb = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                sb = false;
                if (sa)
                {
                    a++;
                }
                else
                {
                    sa = true;
                }
            }
            if (s[i] == 'B')
            {
                sa = false;
                if (sb)
                {
                    b++;
                }
                else
                {
                    sb = true;
                }
            }
        }
        cout << a << " " << b << endl;
    }
    return 0;
}