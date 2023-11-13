#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0, j = 0, count = 0;
    long long sum = 0;
    while (i < n)
    {
        sum += arr[i];
        while (sum >= x)
        {
            if (sum == x)
            {
                count++;
            }

            sum -= arr[j];
            j++;
        }
        i++;
    }

    cout << count << endl;
    return 0;
}