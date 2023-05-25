#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int r, int s, int c, char *n)
    {
        roll = r;
        section = s;
        cls = c;
        strcpy(name, n);
    }
};

int main()
{
    char name[20] = "Rahim";
    // Student rahim(44, 'A', 10, name)
    Student *rahim = new Student(55, 'A', 11, name);

    cout << rahim->roll << endl;

    return 0;
}