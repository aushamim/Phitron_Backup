#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, flag = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] + 1 == a[j] && a[i] + 1 != flag)
            {
                count++;
                flag = a[i] + 1;
            }
        }
        flag = 0;
    }

    cout << count;
    return 0;
}