#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int qm, ql;
            cin >> qm >> ql;
            if (ql == l)
            {
                v.push_back(qm);
            }
        }

        if (v.empty() || k > v.size())
        {
            cout << -1 << endl;
        }
        else
        {
            sort(v.begin(), v.end(), greater<int>());

            int count = 0;
            for (int i = 0; i < k; i++)
            {
                count += v[i];
            }
            cout << count << endl;
        }
    }
    return 0;
}