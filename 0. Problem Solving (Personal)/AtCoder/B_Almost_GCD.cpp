#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k, prevCount = 0;
    for (int i = 2; i <= *max_element(arr, arr + n); i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] % i == 0)
            {
                count++;
            }
        }
        if (count >= prevCount)
        {
            k = i;
            prevCount = count;
        }
    }

    cout << k << endl;

    return 0;
}