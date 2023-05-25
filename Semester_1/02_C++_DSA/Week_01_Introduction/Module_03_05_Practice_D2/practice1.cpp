#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    char section[10];
    int marks;
    int cls;

    Student(const char *n, int r, const char *s, int m, int c)
    {
        strcpy(name, n);
        roll = r;
        strcpy(section, s);
        marks = m;
        cls = c;
    }
};

int main()
{
    Student student1("John", 1, "A", 90, 10);
    Student student2("Jane", 2, "B", 95, 11);
    Student student3("Mike", 3, "A", 85, 9);

    Student highest = student1;

    if (student2.marks > highest.marks)
        highest = student2;

    if (student3.marks > highest.marks)
        highest = student3;

    cout << "Student: " << highest.name << endl;
    cout << "Marks: " << highest.marks << endl;

    return 0;
}
