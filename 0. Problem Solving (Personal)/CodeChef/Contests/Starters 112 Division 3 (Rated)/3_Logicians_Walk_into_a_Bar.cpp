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
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                cout << "NO" << endl;
                flag = false;
            }
            else
            {
                if (flag)
                {
                    if (i == n - 1)
                    {
                        cout << "YES" << endl;
                    }
                    else
                    {
                        cout << "IDK" << endl;
                    }
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}