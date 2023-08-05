#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    int Q;
    cin >> Q;
    while (Q--)
    {
        int a;
        string b;
        cin >> a;
        if (a == 0)
        {
            cin >> b;
            q.push(b);
        }
        else
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    return 0;
}