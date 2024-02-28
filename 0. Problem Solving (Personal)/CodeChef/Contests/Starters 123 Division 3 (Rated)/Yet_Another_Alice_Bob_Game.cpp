#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        if (a == b)
        {
            if (n > a)
            {
                if ((n - (a + 1)) % (a + 1) == 0)
                {
                    cout << "Bob" << endl;
                }
                else
                {
                    cout << "Alice" << endl;
                }
            }
            else
            {
                cout << "Alice" << endl;
            }
        }
        else if (a < b)
        {
            if (n <= a)
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "Bob" << endl;
            }
        }
        else
        {
            cout << "Alice" << endl;
        }
    }
    return 0;
}