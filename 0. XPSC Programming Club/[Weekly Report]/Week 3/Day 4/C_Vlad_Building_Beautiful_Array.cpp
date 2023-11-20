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
        int arr[n];
        vector<int> ev, od;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] % 2 == 0)
            {
                ev.push_back(arr[i]);
            }
            else
            {
                od.push_back(arr[i]);
            }
        }

        sort(ev.begin(), ev.end());
        sort(od.begin(), od.end());

        bool chkEv = true, chkOd = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0 && (od.empty() || od[0] >= arr[i]))
            {
                chkEv = false;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0 && (od.empty() || od[0] >= arr[i]))
            {
                chkOd = false;
                break;
            }
        }

        cout << ((chkEv || chkOd) ? "YES" : "NO") << endl;
    }
    return 0;
}