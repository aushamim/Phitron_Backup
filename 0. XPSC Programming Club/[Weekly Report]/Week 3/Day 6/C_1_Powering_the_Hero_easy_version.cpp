#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        priority_queue<long long> pq;
        long long count = 0;
        for (int i = 0; i < n; i++)
        {
            pq.push(arr[i]);
            if (arr[i] == 0)
            {
                count += pq.top();
                pq.pop();
            }
        }
        cout << count << endl;
    }
    return 0;
}