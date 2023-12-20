#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> arr1, arr2, arr3;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr1.push_back({x, i});
        }
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr2.push_back({x, i});
        }
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr3.push_back({x, i});
        }

        sort(arr1.begin(), arr1.end(), cmp);
        sort(arr2.begin(), arr2.end(), cmp);
        sort(arr3.begin(), arr3.end(), cmp);

        if (arr1[0].second != arr2[0].second && arr2[0].second != arr3[0].second && arr3[0].second != arr1[0].second)
        {
            cout << arr1[0].first + arr2[0].first + arr3[0].first << endl;
        }
        else
        {
            pair<int, int> mx = max(arr1[0], max(arr2[0], arr3[0]));
            if (mx == arr3[0])
            {
                cout << mx.first << " " << mx.second << endl;
            }
        }
    }
    return 0;
}