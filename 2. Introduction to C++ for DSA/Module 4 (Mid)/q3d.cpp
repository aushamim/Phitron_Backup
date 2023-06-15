#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    float height;
    int age;

    Person(const string n, float h, int a)
    {
        name = n;
        height = h;
        age = a;
    }
};

int main()
{
    Person *Karim = new Person("Karim Mia", 5.8, 30);
    Person *Rahim = new Person("Rahim Ali", 5.2, 28);

    Karim->age > Rahim->age ? cout << Karim->name : cout << Rahim->name;

    return 0;
}
