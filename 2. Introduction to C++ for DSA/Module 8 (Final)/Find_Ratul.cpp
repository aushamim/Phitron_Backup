#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string name;
    int count = 0;
    while (ss >> name)
    {
        if (name == "Ratul")
        {
            count++;
        }
    }

    count > 0 ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}