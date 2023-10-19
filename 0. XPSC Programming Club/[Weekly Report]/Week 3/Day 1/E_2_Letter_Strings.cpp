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
        vector<string> v(n);
        map<string, long long> frq;
        map<char, long long> fFrq, lFrq;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            frq[v[i]]++;
            fFrq[v[i][0]]++;
            lFrq[v[i][1]]++;
        }

        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += max((long long)0, fFrq[v[i][0]] - frq[v[i]]);
            sum += max((long long)0, lFrq[v[i][1]] - frq[v[i]]);

            if (frq[v[i]] > 0)
            {
                frq[v[i]]--;
            }
            if (fFrq[v[i][0]] > 0)
            {
                fFrq[v[i][0]]--;
            }
            if (lFrq[v[i][1]] > 0)
            {
                lFrq[v[i][1]]--;
            }
        }
        cout << sum << endl;
    }
    return 0;
}