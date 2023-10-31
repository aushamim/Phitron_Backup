#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        bool flag = false, alice = false;
        for (int i = 0; i < 101; i++)
        {
            if (i == 0)
            {
                if (n >= m)
                {
                    alice = true;
                }
                else
                {
                    alice = false;
                }
            }

            if (alice)
            {
                n--;
                m++;
                alice = false;
            }
            else
            {
                m--;
                n += 3;
                alice = true;
            }

            cout << n << " " << m << endl;

            if (n == m)
            {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}
