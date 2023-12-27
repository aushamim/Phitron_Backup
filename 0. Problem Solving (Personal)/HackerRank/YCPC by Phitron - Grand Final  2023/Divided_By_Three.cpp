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

        if (s.size() <= 5)
        {
            cout << (stoi(s) % 3 == 0 ? "YES" : "NO") << endl;
        }
        else
        {
            int x = 0;
            for (auto c : s)
            {
                x += c - '0';
            }
            cout << (x % 3 == 0 ? "YES" : "NO") << endl;
        }
    }
    return 0;
}