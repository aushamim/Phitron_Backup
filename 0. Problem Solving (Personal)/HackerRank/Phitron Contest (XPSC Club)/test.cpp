#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, tmp;
    cin >> str;

    size_t pos = 0;
    while ((pos = str.find('0')) != string::npos)
    {
        tmp = str.substr(0, pos);
        cout << tmp << endl;
        str.erase(0, pos + 1);
    }

    cout << str << endl;
    return 0;
}