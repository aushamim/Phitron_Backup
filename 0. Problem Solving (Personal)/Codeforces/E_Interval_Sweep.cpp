#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    bool flag = true;
    cin >> a >> b;
    if (a == 0 && b == 0)
    {
        flag = false;
    }
    else if (a > b)
    {
        if (a != b + 1)
        {
            flag = false;
        }
    }
    else if (a < b)
    {
        if (b != a + 1)
        {
            flag = false;
        }
    }

    cout << (flag ? "YES" : "NO");
    return 0;
}