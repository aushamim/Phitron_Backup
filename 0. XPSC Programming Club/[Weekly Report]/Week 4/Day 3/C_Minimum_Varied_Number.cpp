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
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<int> v;

        for (int i = 8; i >= 0; i--)
        {
            if (n - arr[i] >= 0)
            {
                n -= arr[i];
                v.push_back(arr[i]);
            }
        }

        reverse(v.begin(), v.end());

        for (auto it = v.begin(); it != v.end(); it++)
        {
            cout << *it;
        }
        cout << endl;
    }
    return 0;
}