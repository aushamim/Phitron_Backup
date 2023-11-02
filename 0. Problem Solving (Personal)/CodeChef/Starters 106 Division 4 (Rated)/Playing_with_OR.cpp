#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long count = 0;
        for (int i = 0; i < (1 << n); i++)
        {
            vector<long long> v;
            long long arrOr = 0;
            for (int j = 0; j < n; j++)
            {
                long long mask = 1 << j;
                if ((i & mask) != 0)
                {
                    if (v.empty() || j == 0)
                    {
                        v.push_back(arr[j]);
                    }
                    else
                    {
                        if (arr[j - 1] == *(v.end() - 1))
                        {
                            v.push_back(arr[j]);
                        }
                        else
                        {
                            v.clear();
                            break;
                        }
                    }
                    if (!v.empty())
                    {
                        arrOr |= *(v.end() - 1);
                    }
                }
            }

            if (v.size() == k && arrOr % 2 != 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}