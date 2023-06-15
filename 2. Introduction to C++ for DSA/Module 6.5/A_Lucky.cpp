#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s = "";
        cin >> s;
        if ((int(s[0]) - 48) + (int(s[1]) - 48) + (int(s[2]) - 48) == (int(s[s.size() - 1]) - 48) + (int(s[s.size() - 2]) - 48) + (int(s[s.size() - 3]) - 48))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}