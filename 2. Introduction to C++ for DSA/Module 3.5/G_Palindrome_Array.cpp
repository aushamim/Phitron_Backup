#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int s = 0, e = n - 1;

    while (s < e)
    {
        if (arr[s] != arr[e])
        {
            flag = 1;
            break;
        }
        else
        {
            s++;
            e--;
        }
    }

    flag == 0 ? cout << "YES" : cout << "NO";

    return 0;
}