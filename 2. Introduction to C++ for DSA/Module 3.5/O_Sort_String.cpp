#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[26][2] = {0};
    cin >> n;
    char s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        arr[s - 97][1]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i][1] != 0)
        {
            for (int j = 0; j < arr[i][1]; j++)
            {
                cout << char(i + 97);
            }
        }
    }
    return 0;
}