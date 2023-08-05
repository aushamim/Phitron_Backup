#include <bits/stdc++.h>
using namespace std;

int bSearch(int *arr, int k, int l, int r)
{
    int mid = (l + r) / 2;
    if (l <= r)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            return bSearch(arr, k, l, mid - 1);
        }
        else if (arr[mid] < k)
        {
            return bSearch(arr, k, mid + 1, r);
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int index = bSearch(arr, k, 0, n - 1);

    if (index != -1)
        cout << index;
    else
        cout << "Not Found";
    return 0;
}