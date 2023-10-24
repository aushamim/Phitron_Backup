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
        cout << (long long)(stoll(s) == 1 ? 0 : stoll(s) - pow(10, s.size() - 1)) << endl;
    }
    return 0;
}