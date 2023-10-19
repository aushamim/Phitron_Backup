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
        string s;
        cin >> s;

        vector<long long> rm;
        long long sum = 0;
        int ind = 0;

        for (int i = 0; i < n; i++)
        {
            long long L = i, R = n - i - 1;
            if (s[i] == 'L')
            {
                if (R > L)
                {
                    ind++;
                    sum += R;
                    rm.push_back(R - L);
                }
                else
                {
                    sum += L;
                }
            }
            else
            {
                if (L > R)
                {
                    ind++;
                    sum += L;
                    rm.push_back(L - R);
                }
                else
                {
                    sum += R;
                }
            }
        }

        sort(rm.begin(), rm.end(), greater<long long>());

        long long ans[n];
        for (int i = 0; i < n; i++)
        {
            ans[i] = sum;
        }

        for (int i = ind - 2; i >= 0; i--)
        {
            sum -= rm.back();
            rm.pop_back();
            ans[i] = sum;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}