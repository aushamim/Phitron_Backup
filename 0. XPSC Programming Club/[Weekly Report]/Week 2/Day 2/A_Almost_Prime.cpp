#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    bool prime = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }
    return prime;
}

int main()
{
    int n;
    cin >> n;

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int pCount = 0;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0 && isPrime(j))
            {
                pCount++;
            }
        }
        if (pCount == 2)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}