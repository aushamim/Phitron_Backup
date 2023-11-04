#include <bits/stdc++.h>
using namespace std;

long long sumOfDigits(long long x)
{
    long long ans = 0;
    while (x > 0)
    {
        ans += x % 10;
        x /= 10;
    }
    return ans;
}

int main()
{
    long long n, s;
    cin >> n >> s;

    long long l = 0, r = n, mn = 0, mx = 0;
    while (l <= r)
    {
        long long mid = l + (r - l) / 2;
        if (mid - sumOfDigits(mid) >= s)
        {
            if ((mid - 1) - sumOfDigits(mid - 1) >= s)
            {
                r = mid - 1;
            }
            else
            {
                mn = mid;
                break;
            }
        }
        else
        {
            l = mid + 1;
        }
    }

    l = 0, r = n;
    while (l <= r)
    {
        long long mid = l + (r - l) / 2;
        if (mid - sumOfDigits(mid) >= s)
        {
            if (mid < n && (mid + 1) - sumOfDigits(mid + 1) >= s)
            {
                l = mid + 1;
            }
            else
            {
                mx = mid;
                break;
            }
        }
        else
        {
            l = mid + 1;
        }
    }

    if (mn > 0 && mx > 0)
    {
        cout << mx - mn + 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}