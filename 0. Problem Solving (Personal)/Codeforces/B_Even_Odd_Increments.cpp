#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        long long arr[n];

        long long ev = 0, odd = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] % 2 == 0)
            {
                ev++;
            }
            else
            {
                odd++;
            }
        }
        while (q--)
        {
            int a, b;
            cin >> a >> b;

            if (a == 0)
            {
                sum += ev * b;
                if (b % 2 != 0)
                {
                    odd += ev;
                    ev = 0;
                }
            }
            else
            {
                sum += odd * b;
                if (b % 2 != 0)
                {
                    ev += odd;
                    odd = 0;
                }
            }

            cout << sum << endl;
        }
    }
    return 0;
}