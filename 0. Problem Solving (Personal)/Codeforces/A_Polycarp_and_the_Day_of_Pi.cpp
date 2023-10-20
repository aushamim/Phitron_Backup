#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        string chk = "314159265358979323846264338327";
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != chk[i])
            {
                break;
            }
            count++;
        }
        cout << count << endl;
    }
    return 0;
}
