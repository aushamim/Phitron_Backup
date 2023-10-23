#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        if (a[a.size() - 1] == b[b.size() - 1])
        {
            if (a.size() == b.size())
            {
                cout << '=' << endl;
            }
            else if (a.size() > b.size())
            {
                cout << ((a[a.size() - 1] == 'S') ? '<' : '>') << endl;
            }
            else
            {
                cout << ((a[a.size() - 1] == 'S') ? '>' : '<') << endl;
            }
        }
        else
        {
            if (a[a.size() - 1] < b[b.size() - 1])
            {
                cout << '>' << endl;
            }
            else
            {
                cout << '<' << endl;
            }
        }
    }
    return 0;
}