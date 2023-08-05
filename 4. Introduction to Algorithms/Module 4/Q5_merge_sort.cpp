#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int arr1[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }

    int n;
    cin >> n;
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    int result[m + n];
    int a1 = 0, a2 = 0;

    int i = 0;
    while (a1 < m || a2 < n)
    {
        if (a1 == m)
        {
            result[i] = arr2[a2];
            a2++;
        }
        else if (a2 == n)
        {
            result[i] = arr1[a1];
            a1++;
        }
        else
        {
            if (arr1[a1] > arr2[a2])
            {
                result[i] = arr1[a1];
                a1++;
            }
            else
            {
                result[i] = arr2[a2];
                a2++;
            }
        }
        i++;
    }

    for (int i = 0; i < m + n; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}