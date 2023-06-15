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

int main()
{
    Student shamim("Amjad Uddin Shamim", 2011514099, 55, 'G');

    cout << "Name:\t" << shamim.name << endl
         << "ID:\t" << shamim.id << endl
         << "Sec:\t" << shamim.batch << "(" << shamim.sec << ")";
    return 0;
}