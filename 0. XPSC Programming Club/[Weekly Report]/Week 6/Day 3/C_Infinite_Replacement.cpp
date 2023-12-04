#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        if (b.size() == 1 && b[0] == 'a')
        {
            cout << 1 << endl;
            continue;
        }

        bool flag = true;
        int lCount = 0;
        for (auto c : b)
        {
            if (c == 'a')
            {
                lCount++;
            }
            if (b.size() > 1 && lCount >= 1)
            {
                flag = false;
                break;
            }
        }
        if (!flag)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << (long long)pow(2, a.size()) << endl;
        }
    }
    return 0;
}