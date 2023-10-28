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

        int mn = INT_MAX, sum = 0;
        bool eql = true;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            if (mn > x)
            {
                mn = x;
            }
            if (mn != INT_MAX && mn != x)
            {
                eql = false;
            }
        }

        if (eql)
        {
            cout << "Yes" << endl;
        }
        else if (((sum - (n * mn)) % n == 0) && ((sum - (n * mn)) > 2))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}