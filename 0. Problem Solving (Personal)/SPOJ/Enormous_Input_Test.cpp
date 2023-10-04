#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k, count = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        if (x % k == 0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}