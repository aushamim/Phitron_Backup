#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }

        bool flag = false;
        for (int i = 0; i < 4; i++)
        {
            int sum = 0;
            for (int j = 0; j < 4; j++)
            {
                if (j != i)
                {
                    sum += arr[j];
                }
            }

            if (sum < arr[i])
            {
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}