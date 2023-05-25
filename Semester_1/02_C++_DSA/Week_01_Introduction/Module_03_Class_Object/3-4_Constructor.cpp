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
    Student s(29, 'A', 7, "Rahim");

    Student k(30, 'B', 8, "Karim");

    cout << s.name << endl;
    cout << k.name;

    return 0;
}