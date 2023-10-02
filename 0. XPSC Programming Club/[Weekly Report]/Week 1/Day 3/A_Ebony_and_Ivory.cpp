#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int flag = 0;
    for (int i = 0; i < 10000; i++)
    {
        for (int j = 0; j < 10000; j++)
        {
            if (a * i + b * j == c)
            {
                flag = 1;
                break;
            }
        }
    }

    cout << (flag == 1 ? "Yes" : "No") << endl;
    return 0;
}