#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int it = 0; it < x; it++)
    {
        int n, ev = 0, od = 0, count = 0;
        cin >> n;
        int arr[n], flag[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                ev++;
                flag[i] = 0;
            }
            else
            {
                od++;
                flag[i] = 1;
            }
        }

        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            while (ev != od)
            {
                for (int i = 0; i < n; i++)
                {
                    if (ev > od)
                    {
                        if (flag[i] == 0)
                        {
                            arr[i]++;
                            flag[i] = 1;
                            ev--;
                            od++;
                            count++;
                        }
                    }
                    else
                    {
                        if (flag[i] == 1)
                        {
                            arr[i]++;
                            flag[i] = 0;
                            ev++;
                            od--;
                            count++;
                        }
                    }
                    if (ev == od)
                    {
                        break;
                    }
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}