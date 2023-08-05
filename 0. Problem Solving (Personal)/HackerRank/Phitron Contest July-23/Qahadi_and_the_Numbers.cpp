#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v;
        int n, count = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            auto it = find(v.begin(), v.end(), x);
            if (it == v.end())
            {
                v.push_back(x);
            }
            else
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}