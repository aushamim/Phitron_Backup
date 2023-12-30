#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n], mul = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mul *= arr[i];
        }

        if (mul == 2023)
        {
            cout << "YES" << endl;
            for (int i = 0; i < k; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
            continue;
        }

        if (2023 % mul == 0)
        {
            cout << "YES" << endl
                 << 2023 / mul << " ";
            for (int i = 1; i < k; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}