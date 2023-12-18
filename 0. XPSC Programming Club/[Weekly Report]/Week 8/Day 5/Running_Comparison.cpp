#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int alice[n], bob[n];
        for (int i = 0; i < n; i++)
        {
            cin >> alice[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> bob[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (alice[i] <= 2 * bob[i] && bob[i] <= 2 * alice[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
