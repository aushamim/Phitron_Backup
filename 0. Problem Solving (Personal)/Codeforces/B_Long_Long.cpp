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
        long long arr[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += abs(arr[i]);
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                while (arr[i] < 1 && i < n)
                {
                    i++;
                }
                count++;
            }
        }

        cout << sum << " " << count << endl;
    }
    return 0;
}