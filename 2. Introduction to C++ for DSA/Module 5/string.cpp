#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";

    cout << s.size() << endl;
    cout << s.max_size() << endl;
    cout << s.capacity() << endl;
    cout << s.empty() << endl;

    cout << endl;

    for (string::iterator it = s.begin(); it < s.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}