// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str1, str2;
//     while (cin >> str1 >> str2)
//     {
//         int chk[26] = {0}, flag = 0;
//         for (int i = 0; i < str1.length(); i++)
//         {
//             chk[str1[i] - 'a']++;
//         }
//         for (int i = 0; i < str2.length(); i++)
//         {
//             if (chk[str2[i] - 'a'] == 0)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         cout << (flag == 0 ? "Possible" : "Impossible") << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string w1, w2;
    while (cin >> w1 >> w2)
    {
        int j = 0;
        for (int i = 0; i < w1.length() && j < w2.length(); i++)
        {
            if (w1[i] == w2[j])
            {
                j++;
            }
        }
        if (j == w2.length())
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }

    return 0;
}