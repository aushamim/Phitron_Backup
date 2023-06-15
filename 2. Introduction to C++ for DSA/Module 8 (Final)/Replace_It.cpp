#include <bits/stdc++.h>
using namespace std;
int main()
{
    int it;
    cin >> it;
    for (int t = 0; t < it; t++)
    {
        string s, x;
        cin >> s >> x;

        while (s.find(x) != -1)
        {
            s.replace(s.find(x), x.size(), "$");
        }

        cout << s << endl;
    }
    return 0;
}