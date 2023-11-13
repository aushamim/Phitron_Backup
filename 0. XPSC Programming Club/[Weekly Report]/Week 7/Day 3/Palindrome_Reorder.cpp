#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int> &a, pair<char, int> &b)
{
    return a.second > b.second;
}

int main()
{
    string s;
    cin >> s;

    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    bool isPal = true;
    if (s.size() % 2 == 0)
    {
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second % 2 != 0)
            {
                isPal = false;
                break;
            }
        }
    }
    else
    {
        int od = 0, ev = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second % 2 == 0)
            {
                ev++;
            }
            else
            {
                od++;
            }
        }

        if (od > 1)
        {
            isPal = false;
        }
    }

    if (isPal)
    {
        if (s.size() % 2 == 0)
        {
            vector<pair<char, int>> v(mp.begin(), mp.end());
            for (auto it = v.begin(); it != v.end(); it++)
            {
                for (int i = 0; i < it->second / 2; i++)
                {
                    cout << it->first;
                }
            }
            for (auto it = v.end() - 1; it != v.begin() - 1; it--)
            {
                for (int i = 0; i < it->second / 2; i++)
                {
                    cout << it->first;
                }
            }
        }
        else
        {
            vector<pair<char, int>> v(mp.begin(), mp.end());
            char c;
            int cc;
            for (auto it = v.begin(); it != v.end(); it++)
            {
                if (it->second % 2 != 0)
                {
                    c = it->first;
                    cc = it->second;
                }
                else
                {
                    for (int i = 0; i < it->second / 2; i++)
                    {
                        cout << it->first;
                    }
                }
            }
            for (int i = 0; i < cc; i++)
            {
                cout << c;
            }
            for (auto it = v.end() - 1; it != v.begin() - 1; it--)
            {
                if (it->second % 2 == 0)
                {
                    for (int i = 0; i < it->second / 2; i++)
                    {
                        cout << it->first;
                    }
                }
            }
        }
    }
    else
    {
        cout << "NO SOLUTION" << endl;
    }
    return 0;
}