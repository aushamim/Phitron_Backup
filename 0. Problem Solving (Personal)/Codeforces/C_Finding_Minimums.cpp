#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, min = INT_MAX, flag = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        flag++;
        if (x < min)
        {
            min = x;
        }
        if (flag == k || i == n - 1)
        {
            cout << min << " ";
            min = INT_MAX;
            flag = 0;
        }
    }
    return 0;
}