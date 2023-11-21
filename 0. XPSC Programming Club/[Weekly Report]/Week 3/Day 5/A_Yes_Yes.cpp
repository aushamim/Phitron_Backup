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

        string chk = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        int i = chk.find(s[0]);
        if (i == -1)
        {
            cout << "NO" << endl;
        }
        else
        {
            string ss = chk.substr(i, s.length());
            cout << (s == ss ? "YES" : "NO") << endl;
        }
    }
    return 0;
}