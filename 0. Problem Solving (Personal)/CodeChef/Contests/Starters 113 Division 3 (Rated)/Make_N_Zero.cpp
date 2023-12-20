#include <bits/stdc++.h>
using namespace std;
bool calc(int n)
{
    if (n == 0)
    {
        return true;
    }
    if (n < 0)
    {
        return false;
    }
    return calc(n - 3) || calc(n - 4);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << (calc(n) ? "YES" : "NO") << endl;
    }
    return 0;
}