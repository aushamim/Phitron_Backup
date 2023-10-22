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
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int p = 0;
        for (int i = 0; i < n; i++)
        {
            while (arr[i] % 2 == 0)
            {
                p++;
                arr[i] /= 2;
            }
        }

        vector<int> v;
        for (int i = 2; i <= n; i++)
        {
            int num = i, numC = 0;
            while (num % 2 == 0)
            {
                numC++;
                num /= 2;
            }
            if (numC > 0)
            {
                v.push_back(numC);
            }
        }

        sort(v.begin(), v.end(), greater<int>());

        int count = 0;
        for (auto it = v.begin(); it != v.end(); it++)
        {
            if (n - p > 0)
            {
                p += *it;
                count++;
            }
        }

        cout << (p < n ? -1 : count) << endl;
    }
    return 0;
}