#include <iostream>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int math_marks;
    int eng_marks;
};

void reversedStudents(Student *students, int n)
{
    if (n == 0)
        return;

    Student &currentStudent = students[n - 1];
    cout << currentStudent.nm << " " << currentStudent.cls << " " << currentStudent.s << " " << currentStudent.math_marks << " " << currentStudent.eng_marks << endl;
    reversedStudents(students, n - 1);
}

int main()
{
    int n;
    cin >> n;

    Student *students = new Student[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].math_marks >> students[i].eng_marks;
    }

    reversedStudents(students, n);

    return 0;
}
