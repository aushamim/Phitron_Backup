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
        int arr[2][n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[0][i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr[1][i];
        }

        int flag = 0;
        int om = 0, addy = 0;
        int omMax = 0, addyMax = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[0][i] == 0)
            {
                omMax = max(omMax, om);
                om = 0;
            }
            else
            {
                om++;
            }
            if (arr[1][i] == 0)
            {
                addyMax = max(addyMax, addy);
                addy = 0;
            }
            else
            {
                addy++;
            }
        }
        omMax = max(omMax, om);
        addyMax = max(addyMax, addy);

        if (omMax == addyMax)
        {
            cout << "Draw" << endl;
        }
        else if (addyMax > omMax)
        {
            cout << "Addy" << endl;
        }
        else
        {
            cout << "Om" << endl;
        }
    }
    return 0;
}