#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    Student a[2];
    for (int i = 0; i < 2; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        cin.ignore();
    }

    Student mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < 2; i++)
    {
        if (a[i].marks > mx.marks)
        {
            mx = a[i];
        }
    }
    cout << mx.name << " " << mx.roll << " " << mx.marks << endl;

    Student mn;
    mn.marks = INT_MAX;
    for (int i = 0; i < 2; i++)
    {
        if (a[i].marks < mn.marks)
        {
            mn = a[i];
        }
    }
    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;
    // for (int i = 0; i < 2; i++)
    // {
    //     cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    // }
    return 0;
}