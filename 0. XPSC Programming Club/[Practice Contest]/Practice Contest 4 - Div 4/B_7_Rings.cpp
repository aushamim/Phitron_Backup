#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        string s = to_string(n * x);
        cout << (s.size() == 5 ? "YES" : "NO") << endl;
    }
    return 0;
}