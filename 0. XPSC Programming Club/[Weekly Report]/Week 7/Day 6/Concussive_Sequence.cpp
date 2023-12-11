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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        vector<int> v1, v2, vl, vr;
        for (int i = 0; i < n; i++)
        {
            if (i < ((n / 2) + (n % 2)))
            {
                vl.push_back(arr[i]);
            }
            else
            {
                vr.push_back(arr[i]);
            }
        }

        for (int i = 0; i < min(vl.size(), vr.size()); i++)
        {
            v1.push_back(vl[i]);
            v1.push_back(vr[i]);
            v2.push_back(vr[i]);
            v2.push_back(vl[i]);
        }
        if (n % 2 != 0)
        {
            v1.push_back(vl[vl.size() - 1]);
            v2.push_back(vl[vl.size() - 1]);
        }

        bool flag = true;
        for (int i = 1; i < n - 1; i++)
        {
            if ((v1[i - 1] < v1[i] && v1[i] > v1[i + 1]) || (v1[i - 1] > v1[i] && v1[i] < v1[i + 1]))
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            for (auto val : v1)
            {
                cout << val << " ";
            }
            cout << endl;
        }
        else
        {
            flag = true;
            for (int i = 1; i < n - 1; i++)
            {
                if ((v2[i - 1] < v2[i] && v2[i] > v2[i + 1]) || (v2[i - 1] > v2[i] && v2[i] < v2[i + 1]))
                {
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                for (auto val : v2)
                {
                    cout << val << " ";
                }
                cout << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}