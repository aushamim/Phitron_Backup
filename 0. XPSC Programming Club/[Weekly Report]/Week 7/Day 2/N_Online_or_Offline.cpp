#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float n, m;
        cin >> n >> m;

        if (n - (n * 0.1) == m)
        {
            cout << "EITHER" << endl;
        }
        else if (n - (n * 0.1) < m)
        {
            cout << "ONLINE" << endl;
        }
        else
        {
            cout << "DINING" << endl;
        }
    }
    return 0;
}