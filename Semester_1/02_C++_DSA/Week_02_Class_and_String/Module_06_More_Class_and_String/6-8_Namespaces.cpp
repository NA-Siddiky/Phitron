#include <iostream>
#include <bits/stdc++.h>
using namespace std;

namespace Sid
{
    int age = 23;
    void hello()
    {
        cout << "Print from Sid Namespace" << endl;
    }
}
namespace Sakib
{
    int age2 = 32;
    void hello()
    {
        cout << "Print from Sakib Namespace" << endl;
    }
}
using namespace Sid;
using namespace Sakib;
int main()
{
    // cout << Sid::age << endl;
    // cout << Sakib::age << endl;
    cout << age << endl;
    cout << age2 << endl;
    return 0;
}