#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(const string n, int a)
    {
        name = n;
        age = a;
    }
};

Person fun()
{
    Person Karim("Karim Mia", 30);
    return Karim;
}

int main()
{
    Person Karim = fun();

    cout << Karim.name << endl;
    cout << Karim.age << endl;

    return 0;
}
