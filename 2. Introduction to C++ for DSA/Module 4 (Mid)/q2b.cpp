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

    cout << Karim->name << endl;
    cout << Karim->height << endl;
    cout << Karim->age << endl;

    return 0;
}
