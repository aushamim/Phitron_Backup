#include <bits/stdc++.h>
using namespace std;

bool cmp(string s1, string s2)
{
    if (s1.size() == s2.size())
    {
        return s1 > s2;
    }
    else
    {
        return s1.size() > s2.size();
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        string tmp = "";
        vector<string> v;
        for (int i = 0; i <= str.length(); i++)
        {
            if (i == str.length() || str[i] == '0')
            {
                v.push_back(tmp);
                tmp = "";
            }
            else
            {
                tmp += str[i];
            }
        }

        sort(v.begin(), v.end(), cmp);

        int z = 0, k = 0, flag = 0;
        // for (string val : v)
        // {
        //     if (flag == 0)
        //     {
        //         z += val.length();
        //         flag = 1;
        //     }
        //     else
        //     {
        //         k += val.length();
        //         flag = 0;
        //     }
        // }
        for (int i = 0; i < v.size(); i += 2)
        {
            z += v[i].length();
        }

        cout << z << endl;
    }
    return 0;
}