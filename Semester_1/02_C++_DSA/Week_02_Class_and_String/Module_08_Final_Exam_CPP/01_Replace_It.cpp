#include <iostream>
#include <string>

using namespace std;

class Replacer
{
public:
    string S;
    string X;

    void readInput()
    {
        getline(cin, S);

        size_t spacePos = S.find(' ');
        X = S.substr(spacePos + 1);
        S = S.substr(0, spacePos);
    }
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    while (n--)
    {
        Replacer replace;
        replace.readInput();

        size_t position = replace.S.find(replace.X);
        while (position < replace.S.length())
        {
            replace.S.replace(position, replace.X.length(), "$");
            position = replace.S.find(replace.X, position + 1);
        }

        cout << replace.S << endl;
    }

    return 0;
}
