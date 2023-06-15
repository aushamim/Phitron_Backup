#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        vector<int> a1(n), a2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a1[i];
            a2[i] = a1[i];
        }

        sort(a2.begin(), a2.end());

        cout << (a1 == a2 ? "YES" : "NO") << endl;
    }
    return 0;
}