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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<string> s;
        for (int i = 0; i < n; i++)
        {
            int n;
            string is;
            cin >> n >> is;
            s.push_back(is);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < s[i].size(); j++)
            {
                if (s[i][j] == 'U')
                {
                    arr[i]--;
                }
                else
                {
                    arr[i]++;
                }

                if (arr[i] > 9)
                {
                    arr[i] = 0;
                }
                else if (arr[i] < 0)
                {
                    arr[i] = 9;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}