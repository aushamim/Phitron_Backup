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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i - 1] > i)
            {
                count = max(count, arr[i - 1] - i);
            }
        }
        cout << count << endl;
    }
    return 0;
}