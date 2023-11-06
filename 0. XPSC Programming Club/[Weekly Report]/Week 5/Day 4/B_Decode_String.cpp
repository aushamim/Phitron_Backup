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

        string ss = "", ans = "";
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (i < n - 1 && s[i + 1] == '0')
                {
                    ss += '0';
                    i++;
                }
                if (ss.length() > 3)
                {
                    string sss = ss.substr(0, ss.length() - 3);
                    string newSS = ss.substr(ss.length() - 3, 3);
                    ss = newSS;

                    for (int i = 0; i < sss.length(); i++)
                    {
                        char a = 'a' + ((sss[i] - '0') - 1);
                        ans += a;
                    }
                }
                if (ss.length() == 3)
                {
                    char a = 'a' + ((ss[0] - '0') - 1);
                    char b = 'a' + (stoi(ss.substr(1, 2)) - 1);
                    ans += a;
                    ans += b;
                    ss = "";
                }
                else
                {
                    char a = 'a' + (stoi(ss) - 1);
                    ans += a;
                    ss = "";
                }
            }
            else
            {
                ss += s[i];
            }
        }
        for (int i = 0; i < ss.length(); i++)
        {
            char a = 'a' + ((ss[i] - '0') - 1);
            ans += a;
        }
        cout << ans << endl;
    }
    return 0;
}