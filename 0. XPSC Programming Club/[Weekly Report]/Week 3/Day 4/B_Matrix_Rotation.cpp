#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[2][2];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
        }

        bool ans = false;
        for (int i = 0; i < 4; i++)
        {
            if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])
            {
                ans = true;
                break;
            }
            else
            {
                int a = arr[0][0], b = arr[0][1], c = arr[1][1], d = arr[1][0];
                arr[0][0] = d;
                arr[0][1] = a;
                arr[1][1] = b;
                arr[1][0] = c;
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
    return 0;
}