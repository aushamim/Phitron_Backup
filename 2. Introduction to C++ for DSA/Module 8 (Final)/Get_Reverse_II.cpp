#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student stArr[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cin >> stArr[i].name >> stArr[i].cls >> stArr[i].sec >> stArr[i].id;
    }

    int s = 0, e = n - 1;

    while (s < e)
    {
        swap(stArr[s].id, stArr[e].id);
        s++;
        e--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << stArr[i].name << " " << stArr[i].cls << " " << stArr[i].sec << " " << stArr[i].id << endl;
    }

    return 0;
}