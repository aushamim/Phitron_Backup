#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        s += s;
        vector<int> v;

        int turn = 0;
        if (c == 'g')
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == c)
                {
                    while (i < s.size() && s[i] != 'g')
                    {
                        turn++;
                        i++;

                        if (i == s.size() - 1)
                        {
                            turn = 0;
                        }
                    }
                    if (turn != 0)
                    {
                        v.push_back(turn);
                        turn = 0;
                    }
                }
            }

            sort(v.begin(), v.end(), greater<int>());
            cout << v[0] << endl;
        }
    }
    return 0;
}