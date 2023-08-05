#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int max = LONG_LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        int count = 0;
        cin >> x;
        while (x % 2 == 0)
        {
            x /= 2;
            count++;
        }
        if (count > max)
        {
            max = count;
        }
    }
    cout << max << endl;
    return 0;
}