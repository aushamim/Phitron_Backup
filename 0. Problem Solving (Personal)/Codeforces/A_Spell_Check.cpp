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

        int flag = 0, freq[26][2] = {0};
        if (s.size() != 5)
        {
            flag = 1;
        }
        else
        {
            flag = 1;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    freq[s[i] - 'A'][1]++;
                }
                else if (s[i] >= 'a' && s[i] <= 'z')
                {
                    freq[s[i] - 'a'][0]++;
                }
            }

            if (freq['T' - 'A'][1] == 1 && freq['i' - 'a'][0] == 1 && freq['m' - 'a'][0] == 1 && freq['u' - 'a'][0] == 1 && freq['r' - 'a'][0] == 1)
            {
                flag = 0;
            }
        }

        cout << (flag == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}