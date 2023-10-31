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
        string s;
        cin >> s;

        char frq[51];
        memset(frq, '0', sizeof frq);

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (frq[arr[i]] == '0' || frq[arr[i]] == s[i])
            {
                frq[arr[i]] = s[i];
            }
            else
            {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}