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
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (i > 0 && arr[i] != arr[i - 1])
            {
                flag = 0;
            }
        }

        if (flag == 1)
        {
            cout << n * arr[0];
        }
        else if (n <= 2)
        {
            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += arr[i];
            }
            cout << sum << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    for (int k = 0; k < n; k++)
                    {
                        if (j != k)
                        {
                            int mn = min(arr[j], arr[k]);
                            if (arr[i] < mn)
                            {
                                arr[i] = mn;
                            }
                        }
                    }
                }
            }

            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += arr[i];
            }
            cout << sum << endl;
        }
    }
    return 0;
}