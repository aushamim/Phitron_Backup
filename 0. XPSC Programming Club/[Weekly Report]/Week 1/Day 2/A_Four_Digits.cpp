#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    for (int i = 0; i < 4 - n.size(); i++)
    {
        cout << '0';
    }
    cout << n << endl;
    return 0;
}