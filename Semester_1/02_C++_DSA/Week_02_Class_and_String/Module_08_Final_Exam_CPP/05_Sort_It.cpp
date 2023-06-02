#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls, id, math_marks, eng_marks, total_marks;
    char s;
};

bool cmp(const Student &a, const Student &b)
{
    if (a.total_marks == b.total_marks)
        return a.id < b.id;
    return a.total_marks > b.total_marks;
}

int main()
{
    int n;
    cin >> n;
    Student students[100];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
        students[i].total_marks = students[i].math_marks + students[i].eng_marks;
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; i++)
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << "\n";

    return 0;
}
