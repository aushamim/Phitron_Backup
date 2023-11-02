#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    while (true)
    {
        t++;
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0)
        {
            break;
        }

        cout << "CASE# " << t << ":" << endl;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        while (q--)
        {
            int x;
            cin >> x;

            int l = 0, r = n - 1, ind = -1;
            while (l <= r)
            {
                // int mid = (l + r) / 2;
                int mid = l + (r - l) / 2; // Recommended to find mid

                if (arr[mid] == x)
                {
                    while (true)
                    {
                        if (arr[mid - 1] != x)
                        {
                            ind = mid + 1;
                            break;
                        }
                        else
                        {
                            mid--;
                        }
                    }
                    break;
                }
                else if (x < arr[mid])
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }

            if (ind == -1)
            {
                cout << x << " not found" << endl;
            }
            else
            {
                cout << x << " found at " << ind << endl;
            }
        }
    }
    return 0;
}