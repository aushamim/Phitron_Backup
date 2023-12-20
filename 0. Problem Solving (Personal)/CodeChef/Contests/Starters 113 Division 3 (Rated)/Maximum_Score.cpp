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
        int zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] == 0 ? zero++ : one++;
        }

        if (n == 1)
        {
            cout << 0 << endl;
        }
        else if (zero > one)
        {
            cout << one << endl;
        }
        else
        {
            cout << zero << endl;
        }
    }
    return 0;
}