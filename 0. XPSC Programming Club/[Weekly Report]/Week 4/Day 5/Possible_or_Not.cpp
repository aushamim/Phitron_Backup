#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        int arr[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if ((b & arr[i]) == b)
            {
                v.push_back(arr[i]);
            }
        }

        int prod = -1;
        for (int i = 0; i < v.size(); i++)
        {
            if (prod == -1)
            {
                prod = v[i];
            }
            else
            {
                prod &= v[i];
            }
        }
        cout << (prod == b ? "YES" : "NO") << endl;
    }
    return 0;
}