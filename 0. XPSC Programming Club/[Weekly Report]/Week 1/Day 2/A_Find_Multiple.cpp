#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int closestMultiple = ((a + c - 1) / c) * c;
    if (closestMultiple >= a && closestMultiple <= b)
    {
        cout << closestMultiple << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}