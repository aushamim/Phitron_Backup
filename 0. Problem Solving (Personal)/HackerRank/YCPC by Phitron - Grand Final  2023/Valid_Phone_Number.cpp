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

        if (s.size() != 14)
        {
            cout << "NO" << endl;
            continue;
        }

        string cc = s.substr(0, 4);
        string sim = s.substr(4, 2);

        int plus = 0;
        for (auto c : s)
        {
            if (c == '+')
            {
                plus++;
            }
        }

        if ((cc == "+880") && (plus == 1) && (sim == "13" || sim == "17" || sim == "14" || sim == "19" || sim == "15" || sim == "16" || sim == "18"))
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