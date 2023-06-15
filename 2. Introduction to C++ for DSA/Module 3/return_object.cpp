#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int id;
    int batch;
    char sec;

    Student(char *n, int i, int b, char s)
    {
        strcpy(name, n);
        id = i;
        batch = b;
        sec = s;
    }
};

Student fun()
{
    char name[100] = "Amjad Uddin Shamim";
    Student shamim(name, 2011514099, 55, 'G');
    return shamim;
}

int main()
{
    Student shamim = fun();
    cout << "Name:\t" << shamim.name << endl
         << "ID:\t" << shamim.id << endl
         << "Sec:\t" << shamim.batch << "(" << shamim.sec << ")";
    return 0;
}