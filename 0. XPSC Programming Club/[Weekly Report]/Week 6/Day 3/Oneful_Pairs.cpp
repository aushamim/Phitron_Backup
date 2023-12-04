#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int a, b;
    cin >> a >> b;
    if (a + b + (a * b) == 111)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
