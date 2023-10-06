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
        string a, b;
        cin >> a >> b;

        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if ((a[i] == 'B' && b[i] == 'G') || (a[i] == 'G' && b[i] == 'B'))
                {
                    continue;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        cout << (flag == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}