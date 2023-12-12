#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int z = 0, o = 0;
        for (auto c : s)
        {
            if (c == '0')
            {
                z++;
            }
            else
            {
                o++;
            }
        }
        cout << (min(z, o) % 2 == 0 ? "Ramos" : "Zlatan") << endl;
    }
    return 0;
}