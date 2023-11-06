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

        int thk = INT_MAX;
        int i = 0, sum = arr[0];
        while (i < n)
        {
            int lim = sum, sThk = 0, count = 0;
            bool flag = true;
            for (int j = 0; j < n; j++)
            {
                lim -= arr[j];
                count++;

                if (j == n - 1 && lim != 0)
                {
                    sThk = INT_MAX;
                }
                else if (lim == 0)
                {
                    sThk = max(sThk, count);
                    count = 0;
                    lim = sum;
                }
                else if (lim < 0)
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
            {
                thk = min(thk, sThk);
            }
            i++;
            sum += arr[i];
        }
        cout << thk << endl;
    }
    return 0;
}