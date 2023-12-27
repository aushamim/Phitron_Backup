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

        int count = 0, mx = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < mx)
            {
                count++;
            }
            else if (arr[i] > mx)
            {
                mx = max(mx, arr[i]);
            }
        }
        cout << count << endl;
    }
    return 0;
}