#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int sS = 0;
        cin >> sS;
        string s = "";
        cin >> s;

        int flag[26][2] = {0}, count = 0;

        for (int j = 0; j < s.size(); j++)
        {
            if (flag[s[j] - 65][1] == 0)
            {
                count += 2;
                flag[s[j] - 65][1]++;
            }
            else
            {
                count++;
                flag[s[j] - 65][1]++;
            }
        }

        cout << count << endl;
    }
    return 0;
}