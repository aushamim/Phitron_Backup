#include <bits/stdc++.h>
using namespace std;

int main()
{
    int e;
    cin >> e;

    vector<pair<int, int>> pr;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        pr.push_back(pair<int, int>(a, b));
    }
    sort(pr.begin(), pr.end());

    for (int i = 0; i < pr.size(); i++)
    {
        cout << pr[i].first << " " << pr[i].second << endl;
    }

    return 0;
}