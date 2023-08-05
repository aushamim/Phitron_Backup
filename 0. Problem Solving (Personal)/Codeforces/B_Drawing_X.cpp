#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int slash = n - 1, bslash = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == bslash && j != n / 2)
            {
                cout << "\\";
            }
            else if (j == slash && j != n / 2)
            {
                cout << "/";
            }
            else
            {
                cout << (i == n / 2 && j == n / 2 ? "X" : "*");
            }
        }
        bslash++;
        slash--;
        cout << endl;
    }
    return 0;
}