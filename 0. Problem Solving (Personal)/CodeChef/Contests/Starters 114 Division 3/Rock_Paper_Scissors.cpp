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

        string ss = s;
        sort(ss.begin(), ss.end());

        for (int i = 0; i < n; i++)
        {
            if (ss[i] == s[i] && s != ss)
            {
                cout << 'P';
            }
            else
            {
                if (ss[i] == 'S')
                {
                    cout << 'R';
                }
                else if (ss[i] == 'P')
                {
                    cout << 'S';
                }
                else if (ss[i] == 'R')
                {
                    cout << 'P';
                }
            }
        }
        cout << endl;
    }
    return 0;
}