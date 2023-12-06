#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        string s;
        cin >> n >> s;

        if (n < 17)
        {
            long long num = stoll(s);
            while (num % 8 != 0)
            {
                num++;
            }
            cout << num << endl;
        }
        else
        {
            string s2 = s.substr(n - 4, 4);
            long long num = stoll(s2);
            while (num % 8 != 0)
            {
                num++;
            }
            string ans = to_string(num);
            s[n - 4] = ans[0];
            s[n - 3] = ans[1];
            s[n - 2] = ans[2];
            s[n - 1] = ans[3];
            cout << s << endl;
        }
    }
    return 0;
}