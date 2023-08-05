#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "MCMXCIV";
    int total = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'I')
        {
            if (s[i + 1] == 'V')
            {
                total += 4;
                i++;
            }
            else if (s[i + 1] == 'X')
            {
                total += 9;
                i++;
            }
            else
            {
                total += 1;
            }
        }
        else if (s[i] == 'X')
        {
            if (s[i + 1] == 'L')
            {
                total += 40;
                i++;
            }
            else if (s[i + 1] == 'C')
            {
                total += 90;
                i++;
            }
            else
            {
                total += 10;
            }
        }
        else if (s[i] == 'C')
        {
            if (s[i + 1] == 'D')
            {
                total += 400;
                i++;
            }
            else if (s[i + 1] == 'M')
            {
                total += 900;
                i++;
            }
            else
            {
                total += 100;
            }
        }
        else if (s[i] == 'V')
        {
            total += 5;
        }
        else if (s[i] == 'L')
        {
            total += 50;
        }
        else if (s[i] == 'D')
        {
            total += 500;
        }
        else if (s[i] == 'M')
        {
            total += 1000;
        }
    }

    cout << total;

    return 0;
}

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000

// I can be placed before V (5) and X (10) to make 4 and 9.
// X can be placed before L (50) and C (100) to make 40 and 90.
// C can be placed before D (500) and M (1000) to make 400 and 900.