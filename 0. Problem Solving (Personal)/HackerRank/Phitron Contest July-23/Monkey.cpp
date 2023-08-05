#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (getline(cin, s))
    {
        int cnt[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                cnt[s[i] - 'a']++;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < cnt[i]; j++)
            {
                cout << char(i + 'a');
            }
        }
        cout << endl;
    }
    return 0;
}