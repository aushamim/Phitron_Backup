#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    string word = "";
    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] != ' ' && i < s.size())
        {
            word += s[i];
        }
        else
        {
            for (int j = word.size() - 1; j >= 0; j--)
            {
                cout << word[j];
            }
            word = "";

            if (i != s.size())
            {
                cout << " ";
            }
        }
    }

    return 0;
}