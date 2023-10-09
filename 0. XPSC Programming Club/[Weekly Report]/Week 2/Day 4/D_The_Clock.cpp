#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int x;
        cin >> s >> x;

        int nhh = x / 60;
        int nmm = x % 60;

        string ns = s;
        int count = 0;
        do
        {
            int hh = ((int)(ns[0] - '0') * 10) + (int)(ns[1] - '0');
            int mm = ((int)(ns[3] - '0') * 10) + (int)(ns[4] - '0');

            ns = "";
            int shh, smm;
            if (mm + nmm > 59)
            {
                smm = (mm + nmm) - 60;
                hh++;
            }
            else
            {
                smm = mm + nmm;
            }
            if (hh + nhh > 23)
            {
                shh = (hh + nhh) - 24;
            }
            else
            {
                shh = hh + nhh;
            }

            if (shh < 10)
            {
                ns += '0';
                ns += to_string(shh);
            }
            else
            {
                ns += to_string(shh);
            }
            ns += ':';
            if (smm < 10)
            {
                ns += '0';
                ns += to_string(smm);
            }
            else
            {
                ns += to_string(smm);
            }

            if (ns[0] == ns[4] && ns[1] == ns[3])
            {
                count++;
            }

        } while (ns != s);

        cout << count << endl;
    }
    return 0;
}