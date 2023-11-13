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
        string s1, s2;
        cin >> s1 >> s2;

        int i = 0, ans = INT_MAX;
        for (int i = 0; i < (n - m + 1); i++)
        {
            string ss = s1.substr(i, m);

            int count = 0;
            int n1 = stoi(ss), n2 = stoi(s2);
            while (n1 > 0)
            {
                int x1 = n1 % 10;
                n1 /= 10;
                int x2 = n2 % 10;
                n2 /= 10;

                int L = 9 - abs(x1 - x2) + 1;
                int R = abs(x1 - x2);

                count += min(L, R);

                if (n1 == 0)
                {
                    x1 = n1 % 10;
                    n1 /= 10;
                    x2 = n2 % 10;
                    n2 /= 10;

                    int L = 9 - abs(x1 - x2) + 1;
                    int R = abs(x1 - x2);

                    count += min(L, R);
                }
            }
            // cout << ss << endl;
            ans = min(ans, count);
        }
        cout << ans << endl;
    }
    return 0;
}