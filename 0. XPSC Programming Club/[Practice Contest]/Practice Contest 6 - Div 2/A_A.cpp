#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[6];
        for (int i = 0; i < 6; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + 3, greater<int>());
        sort(arr + 3, arr + 6, greater<int>());

        if ((arr[0] * 100 + arr[1] * 10 + arr[2]) == (arr[3] * 100 + arr[4] * 10 + arr[5]))
        {
            cout << "Tie" << endl;
        }
        else if ((arr[0] * 100 + arr[1] * 10 + arr[2]) > (arr[3] * 100 + arr[4] * 10 + arr[5]))
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
    return 0;
}