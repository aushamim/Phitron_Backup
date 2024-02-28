#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        ll arr[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        while (q--)
        {
            ll x;
            cin >> x;
            bool chk = false;
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    ll tmp = sum - arr[i] - arr[j];
                    tmp = tmp * 2;
                    tmp += arr[i] + arr[j];

                    if (tmp == x)
                    {
                        chk = true;
                        swap(arr[0], arr[i]);
                        swap(arr[j], arr[n - 1]);
                        for (int i = 0; i < n; i++)
                        {
                            cout << arr[i] << " ";
                        }
                        cout << endl;
                        break;
                    }
                }

                if (chk == true)
                {
                    break;
                }
            }
            if (chk == false)
            {
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}