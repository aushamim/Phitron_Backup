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

        int count = 0;
        while (true)
        {
            if (n == 50)
            {
                break;
            }

            if (n < 50)
            {
                n += 2;
            }
            else
            {
                if (n - 3 < 50)
                {
                    n += 2;
                }
                else
                {
                    n -= 3;
                }
            }
            count++;
        }
        cout << count << endl;
    }
    return 0;
}