#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0, x;
        for (int i = 0; i < 3; i++)
        {
            cin >> x;
            if (x == 0)
            {
                count++;
            }
        }
        cout << (count >= 2 ? "Water filling time" : "Not now") << endl;
    }
    return 0;
}