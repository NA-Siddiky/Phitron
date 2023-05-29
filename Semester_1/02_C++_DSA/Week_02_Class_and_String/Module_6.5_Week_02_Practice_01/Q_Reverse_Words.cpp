#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseWords(const string &str)
{
    stringstream ss(str);
    string word;
    string reversedStr;

    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        reversedStr += word + " ";
    }

    reversedStr.pop_back();

    return reversedStr;
}

int main()
{
    string str;
    getline(cin, str);

    string result = reverseWords(str);
    cout << result << endl;

    return 0;
}
