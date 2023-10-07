#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    bool flag = true;
    while (flag)
    {
        int freq[10] = {0};
        n++;
        string s = to_string(n);
        for (int i = 0; i < 4; i++)
        {
            freq[s[i] - '0']++;
        }

        if (freq[s[0] - '0'] == 1 && freq[s[1] - '0'] == 1 && freq[s[2] - '0'] == 1 && freq[s[3] - '0'] == 1)
        {
            flag = false;
            break;
        }
    }

    cout << n << endl;
    return 0;
}