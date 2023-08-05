#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int arr[N], ind = -1;

void binary_search(int k, int l, int r)
{
    int mid = (l + r) / 2;
    if (l <= r)
    {
        if (arr[mid] == k)
        {
            ind = mid;
        }
        else if (arr[mid] > k)
        {
            binary_search(k, l, mid - 1);
        }
        else if (arr[mid] < k)
        {
            binary_search(k, mid + 1, r);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    binary_search(k, 0, n - 1);

    if (ind == -1)
        cout << "Not Found";
    else
        cout << ind;
    return 0;
}