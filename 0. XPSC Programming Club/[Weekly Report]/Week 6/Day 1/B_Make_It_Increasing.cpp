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

        int count = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            while (arr[i] != 0 && arr[i] >= arr[i + 1])
            {
                arr[i] /= 2;
                count++;
            }
            if (arr[i] >= arr[i + 1] || (arr[i] == 0 && i > 0))
            {
                count = -1;
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}