#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class StringInput
{
private:
    string input;

public:
    StringInput()
    {
        getline(cin, input);
    }

    string getInput()
    {
        return input;
    }
};

bool finding(const string &input)
{
    string word = "";
    stringstream ss(input);
    string token;
    while (ss >> token)
    {
        if (token == "Ratul")
        {
            return true;
        }
    }
    return false;
}

int main()
{
    StringInput strInput;
    string input = strInput.getInput();

    input += " ";

    bool found = finding(input);

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
