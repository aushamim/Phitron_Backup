#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int id;
    int batch;
    char sec;
};

int main()
{
    Student shamim;

    strcpy(shamim.name, "Amjad Uddin Shamim");
    shamim.id = 2011514099;
    shamim.batch = 55;
    shamim.sec = 'G';

    cout << "Name:\t" << shamim.name << endl
         << "ID:\t" << shamim.id << endl
         << "Sec:\t" << shamim.batch << "(" << shamim.sec << ")";
    return 0;
}