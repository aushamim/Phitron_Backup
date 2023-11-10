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

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (arr[j] - arr[i] == arr[k] - arr[j])
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }

        cout << (flag ? "Yes" : "No") << endl;
    }
    return 0;
}