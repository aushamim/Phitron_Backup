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

        string trgt = "CODETOWN";
        bool flag = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (trgt[i] == 'A' || trgt[i] == 'E' || trgt[i] == 'I' || trgt[i] == 'O' || trgt[i] == 'U')
            {
                if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                {
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                {
                    flag = false;
                    break;
                }
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}