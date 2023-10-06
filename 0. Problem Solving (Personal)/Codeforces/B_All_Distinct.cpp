#include <bits/stdc++.h>
using namespace std;
const int N = 10e4 + 4;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int freq[N] = {0};
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
        }

        int length = 0, rm = 0;
        for (int i = 0; i < N; i++)
        {
            if (freq[i] != 0)
            {
                rm += freq[i] - 1;
            }
        }

        length = n - rm;
        if (rm % 2 != 0)
        {
            length--;
        }
        cout << length << endl;
    }
    return 0;
}