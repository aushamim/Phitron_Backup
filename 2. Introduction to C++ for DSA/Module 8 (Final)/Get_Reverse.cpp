#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sec;
    int math;
    int eng;
};

int main()
{
    int n;
    cin >> n;
    Student stArr[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cin >> stArr[i].name >> stArr[i].cls >> stArr[i].sec >> stArr[i].math >> stArr[i].eng;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << stArr[i].name << " " << stArr[i].cls << " " << stArr[i].sec << " " << stArr[i].math << " " << stArr[i].eng << endl;
    }
    return 0;
}