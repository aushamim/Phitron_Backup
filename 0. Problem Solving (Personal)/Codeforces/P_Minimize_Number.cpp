#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0, ev = 0;
    while (ev == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                arr[i] = arr[i] / 2;
            }
            else
            {
                ev = 1;
                break;
            }
        }
        if (ev == 0)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}