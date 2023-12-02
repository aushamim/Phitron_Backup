#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int count1 = 0;
            int c = a, d = b;
            while (c >= 1 && d >= 1)
            {
                if (c % d == 0)
                {
                    break;
                }
                c++;
                d--;
                count1++;
            }

            int count2 = 0;
            int e = a, f = b;
            while (e >= 1 && f >= 1)
            {
                if (e % f == 0)
                {
                    break;
                }
                e--;
                f++;
                count2++;
            }
            if (e < f)
            {
                count2 = INT_MAX;
            }
            cout << min(count1, count2) << endl;
        }
    }
    return 0;
}