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
};

int main()
{
    Student s;
    s.roll = 23;
    s.cls = 9;
    s.section = 'A';
    char nm[100] = "Rahim";
    strcpy(s.name, nm);

    Student k;
    k.roll = 23;
    k.cls = 9;
    k.section = 'A';
    char nm2[100] = "Kahim";
    strcpy(k.name, nm2);

    cout << s.name << endl;
    cout << k.roll;

    return 0;
}