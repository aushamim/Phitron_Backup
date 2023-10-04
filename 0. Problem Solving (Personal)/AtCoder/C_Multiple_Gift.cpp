#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, y;
    cin >> x >> y;

    long long int count = 0;
    for (long long int i = x; i <= y; i *= 2)
    {
        count++;
    }
    cout << count << endl;
    return 0;
}