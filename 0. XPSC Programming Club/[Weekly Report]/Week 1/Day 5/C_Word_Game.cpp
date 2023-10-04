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
        vector<string> s[3];
        map<string, int> freq;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string w;
                cin >> w;
                s[i].push_back(w);
                freq[w]++;
            }
        }

        int p[3] = {0};
        for (int i = 0; i < 3; i++)
        {
            for (auto it = s[i].begin(); it != s[i].end(); it++)
            {
                if (freq[*it] == 1)
                {
                    p[i] += 3;
                }
                else if (freq[*it] == 2)
                {
                    p[i] += 1;
                }
            }
        }

        cout << p[0] << " " << p[1] << " " << p[2] << endl;
    }
    return 0;
}