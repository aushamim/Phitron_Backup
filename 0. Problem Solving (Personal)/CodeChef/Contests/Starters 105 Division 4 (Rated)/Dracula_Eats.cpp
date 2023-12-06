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
        string arr[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i % 7] == "Tue")
            {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}