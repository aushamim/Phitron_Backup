#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
    int math;
    int eng;
    int total;
};

bool cmp(Student a, Student b)
{
    if (a.total == b.total)
    {
        if (a.id < b.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (a.total > b.total)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    Student stArr[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cin >> stArr[i].name >> stArr[i].cls >> stArr[i].sec >> stArr[i].id >> stArr[i].math >> stArr[i].eng;
        stArr[i].total = stArr[i].math + stArr[i].eng;
    }

    sort(stArr, stArr + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << stArr[i].name << " " << stArr[i].cls << " " << stArr[i].sec << " " << stArr[i].id << " " << stArr[i].math << " " << stArr[i].eng << endl;
    }
    return 0;
}