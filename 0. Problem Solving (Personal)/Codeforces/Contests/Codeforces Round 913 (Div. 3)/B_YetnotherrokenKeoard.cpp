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

        int arr[s.size()] = {0};
        vector<int> sm, lg;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'B' && s[i] != 'b')
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    lg.push_back(i);
                }
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    sm.push_back(i);
                }
            }
            if (s[i] == 'B')
            {
                arr[i] = -1;
                if (!lg.empty())
                {
                    arr[lg.back()] = -1;
                    lg.pop_back();
                }
            }
            if (s[i] == 'b')
            {
                arr[i] = -1;
                if (!sm.empty())
                {
                    arr[sm.back()] = -1;
                    sm.pop_back();
                }
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (arr[i] == 0)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}