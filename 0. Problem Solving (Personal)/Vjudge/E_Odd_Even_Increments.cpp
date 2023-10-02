#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, odd = 0, even = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        int flag = 0;
        if (n == 2 || even == n || odd == n)
        {
            cout << "YES" << endl;
            continue;
        }
        else if (arr[0] % 2 == 0)
        {
            for (int i = 0; i < n; i += 2)
            {
                if (arr[i] % 2 != 0)
                {
                    flag = 1;
                    break;
                }
            }
            for (int i = 1; i < n; i += 2)
            {
                if (arr[i] % 2 == 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        else if (arr[0] % 2 != 0)
        {
            for (int i = 0; i < n; i += 2)
            {
                if (arr[i] % 2 == 0)
                {
                    flag = 1;
                    break;
                }
            }
            for (int i = 1; i < n; i += 2)
            {
                if (arr[i] % 2 != 0)
                {
                    flag = 1;
                    break;
                }
            }
        }

        cout << (flag == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}