#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

void reverseStudents(Student *students, int start, int end)
{
    if (start >= end)
        return;

    swap(students[start].id, students[end].id);

    reverseStudents(students, start + 1, end - 1);
}

int main()
{
    int n;
    cin >> n;

    Student *students = new Student[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id;
    }

    reverseStudents(students, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << endl;
    }

    return 0;
}
