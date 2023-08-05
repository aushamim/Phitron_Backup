#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int a;
    string b = "";
    string res = "";
    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            a = s[i] - '0';
        }
        else if (s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/' && s[i] != '\0')
        {
            b += s[i];
        }
        else
        {
            for (int i = 0; i < a; i++)
            {
                res += b;
            }
            if (s[i] != '\0')
            {
                res += s[i];
            }
            b = "";
        }
    }
    cout << res << endl;
    return 0;
}