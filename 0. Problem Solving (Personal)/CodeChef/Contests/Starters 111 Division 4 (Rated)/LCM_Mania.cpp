#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        bool flag = false;
        for (int a = 1; a <= x / 3; a++)
        {
            for (int b = 1; b <= x / 3; b++)
            {
                for (int c = 1; c <= x / 3; c++)
                {
                    if (lcm(a, b) + lcm(b, c) + lcm(c, a) == x)
                    {
                        cout << a << " " << b << " " << c << endl;
                        // flag = true;
                        // break;
                    }
                }
                if (flag)
                {
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }
    }
    return 0;
}