#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    char name[100];
    int sallary;
    int experiance;

    Employee(int s, int e, const char *n)
    {
        sallary = s;
        experiance = e;
        strcpy(name, n);
    }
};

int main()
{
    Employee Karim(80000, 5, "Karim Mia");

    cout << Karim.name << endl;
    cout << Karim.experiance << endl;
    cout << Karim.sallary << endl;

    return 0;
}
