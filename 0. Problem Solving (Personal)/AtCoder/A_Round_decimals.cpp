#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x;
    cin >> x;

    cout << ((x - floor(x)) < 0.5 ? floor(x) : ceil(x)) << endl;
    return 0;
}