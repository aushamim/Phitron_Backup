#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int fa[26] = {0}, flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        fa[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (fa[i] == 0)
        {
            cout << (char)(i + 'a') << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "None" << endl;
    }
    return 0;
}