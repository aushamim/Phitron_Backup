#include <bits/stdc++.h>
using namespace std;

void prnt(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        cout << c << " ";
    }
    cout << endl;
}
int main()
{
    int x;
    cin >> x;
    for (int it = 0; it < x; it++)
    {
        int n;
        char c;
        cin >> n >> c;
        prnt(n, c);
    }
    return 0;
}