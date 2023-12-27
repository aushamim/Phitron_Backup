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

        int points = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                points += arr[i];
            }
            else
            {
                points += arr[i + 1];
            }
        }
        cout << points << endl;
    }
    return 0;
}