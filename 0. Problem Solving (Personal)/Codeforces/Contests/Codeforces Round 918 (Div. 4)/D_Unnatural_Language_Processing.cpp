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
        vector<string> v;
        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            if ((s[i] == 'b' || s[i] == 'c' || s[i] == 'd') && (s[i + 1] == 'a' || s[i + 1] == 'e'))
            {
                string ss = "";
                ss += s[i];
                ss += s[i + 1];
                v.push_back(ss);
                i++;
                if (i == n - 1)
                {
                    flag = false;
                }
            }
            else
            {
                v[v.size() - 1] += s[i];
            }
        }
        if (flag)
        {
            v[v.size() - 1] += s[n - 1];
        }

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
            if (i < v.size() - 1)
            {
                cout << '.';
            }
        }
        cout << endl;
    }
    return 0;
}