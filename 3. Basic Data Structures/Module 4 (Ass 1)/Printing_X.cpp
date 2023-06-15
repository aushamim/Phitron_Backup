#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int pre = 0, mid = n - 2;
    for (int i = 0; i < n; i++)
    {
        if (i == n / 2)
        {
            for (int l = 0; l < n / 2; l++)
            {
                cout << " ";
            }
            cout << "X";
        }
        else
        {
            for (int j = 0; j < pre; j++)
            {
                cout << " ";
            }

            cout << (i < n / 2 ? "\\" : "/");

            for (int k = 0; k < mid; k++)
            {
                cout << " ";
            }

            cout << (i < n / 2 ? "/" : "\\");
        }

        cout << endl;

        if (i < n / 2)
        {
            pre++;
            mid -= 2;
        }
        else
        {
            pre--;
            mid += 2;
        }
    }
    return 0;
}