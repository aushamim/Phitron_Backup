#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    int count = 0;
    string word = "";
    for (int i = 0; i <= s.size(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            word += s[i];
        }
        else
        {
            if (word.size() > 0)
            {
                count++;
            }
            word = "";
        }
    }

    cout << count << endl;

    return 0;
}