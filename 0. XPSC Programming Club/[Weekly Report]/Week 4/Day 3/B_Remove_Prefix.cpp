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
        map<int, int> mp;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (mp[arr[i]] > 0)
            {
                break;
            }
            mp[arr[i]]++;
            count++;
        }

        cout << n - count << endl;
    }
    return 0;
}