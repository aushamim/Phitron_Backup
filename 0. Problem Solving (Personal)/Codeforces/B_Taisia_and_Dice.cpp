#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r;
        cin >> n >> s >> r;

        int dice = s - r;
        cout << dice << " ";
        n--;
        while (n > 0)
        {
            if (r - dice >= n - 1)
            {
                cout << dice << " ";
                r -= dice;
                n--;
            }
            else
            {
                dice--;
            }
        }
        cout << endl;
    }
    return 0;
}

// It accepts 🔥