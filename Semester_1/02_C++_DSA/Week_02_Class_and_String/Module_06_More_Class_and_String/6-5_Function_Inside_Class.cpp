#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int mark1;
    int mark2;
    Person(string nm, int ag, int m1, int m2)
    {
        name = nm;
        age = ag;
        mark1 = m1;
        mark2 = m2;
    }
    void hello()
    {
        cout << "hello" << endl;
    }
    int totalMarks()
    {
        return mark1 + mark2;
    }
};

int main()
{
    Person rakib("Rakib Haasan", 25, 12, 33);
    cout << rakib.name << " " << rakib.age << endl;
    rakib.hello();
    // rakib.totalMarks();
    cout << rakib.totalMarks() << endl;
    return 0;
}