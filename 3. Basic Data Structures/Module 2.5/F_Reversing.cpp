#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = a.size() - 1; i >= 0; i--)
    {
        b[a.size() - 1 - i] = a[i];
    }
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}