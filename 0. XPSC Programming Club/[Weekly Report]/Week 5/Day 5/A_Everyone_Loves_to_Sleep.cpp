#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sh, sm;
        cin >> n >> sh >> sm;
        int sTime = sh * 60 + sm;

        int h = INT_MAX, m = INT_MAX;
        int sleep = INT_MAX;
        while (n--)
        {
            int ah, am;
            cin >> ah >> am;

            int aTime = ah * 60 + am;

            if (aTime - sTime >= 0)
            {
                sleep = min(sleep, aTime - sTime);
            }
            else
            {
                sleep = min(sleep, 1440 + aTime - sTime);
            }
        }
        cout << sleep / 60 << " " << sleep % 60 << endl;
    }
    return 0;
}