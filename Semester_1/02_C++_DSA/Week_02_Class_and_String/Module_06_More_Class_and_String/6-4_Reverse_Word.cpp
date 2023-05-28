#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printing(stringstream &xx)
{
    string word;
    if (xx >> word)
    {
        // cout << word << endl;
        printing(xx);
        cout << word << endl;
    }
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    printing(ss);
    // string var;
    // while (xx >> var)
    // {
    //     cout << var << endl;
    // }
    return 0;
}