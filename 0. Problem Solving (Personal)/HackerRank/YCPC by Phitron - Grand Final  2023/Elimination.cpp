#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int count = 0;
        string ss = s.substr(l - 1, r);

        for (int i = 0; i < ss.size() - 1; i++)
        {
            if (ss[i] == '0' && ss[i + 1] == '1')
            {
                count += 2;
                if ((i > 0 && i < ss.size() - 1) && (ss[i - 1] == '0' && ss[i + 2] == '1'))
                {
                    count += 2;
                    i++;
                }
                i++;
            }
        }
        cout << count << endl;
    }
    return 0;
}