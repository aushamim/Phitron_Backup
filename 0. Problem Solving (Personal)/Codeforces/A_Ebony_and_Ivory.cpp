#include <bits/stdc++.h>
using namespace std;
int main()
{
    int calc[101][101] = {0};
    int a, b, c;
    cin >> a >> b >> c;

    int flag = 0;
    if (flag == 0)
    {
        for (int i = 1; i <= 100; i++)
        {
            calc[0][i] = calc[0][i - 1] + a;
            if (calc[0][i] == c)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        for (int i = 1; i <= 100; i++)
        {
            calc[i][0] = calc[i - 1][0] + b;
            if (calc[i][0] == c)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
    {
        for (int i = 2; i <= 100; i++)
        {
            for (int j = 2; j <= 100; j++)
            {
                calc[i][j] = calc[i][j - 1] + calc[i - 1][j];
                if (calc[i][j] == c)
                {
                    flag = 1;
                    break;
                }
            }
        }
    }

    cout << (flag == 1 ? "Yes" : "No") << endl;
    return 0;
}