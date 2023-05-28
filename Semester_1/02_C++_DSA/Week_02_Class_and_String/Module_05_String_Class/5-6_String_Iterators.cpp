#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    cin >> s;
    // cout << s << endl;

    // for (string::iterator it = s.begin(); it < s.end(); it++)
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }

    // cout << *s.begin() << endl;
    // cout << *s.end() << endl;
    return 0;
}