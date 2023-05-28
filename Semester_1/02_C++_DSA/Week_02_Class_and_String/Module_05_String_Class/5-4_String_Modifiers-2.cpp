#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Hello_";
    string b = "World";

    // a += b;
    // a.append(b);
    // cout << a << endl;
    // cout << b << endl;

    // a.push_back('Z');
    // cout << a << endl;

    // a.pop_back();
    // cout << a << endl;

    // a = "Gelo";
    // a.assign("Gelo");
    // cout << a << endl;

    // a.erase(0, 2);
    // cout << a << endl;

    // a.replace(0, 2, "XX");
    // cout << a << endl;

    a.insert(2, "SID");
    std::cout << a << endl;

    return 0;
}