#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float x;
        cin >> x;
        cout << ceil(100 / ((20 * x) / 100)) << endl;
    }
    return 0;
}