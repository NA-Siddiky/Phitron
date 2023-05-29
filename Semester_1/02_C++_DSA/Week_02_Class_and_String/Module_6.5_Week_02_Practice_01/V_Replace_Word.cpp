#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s); // Read the input string

    string target = "EGYPT";
    string replaceWith = " ";

    size_t pos = s.find(target);
    while (pos != string::npos)
    {
        s.replace(pos, target.length(), replaceWith);
        pos = s.find(target, pos + replaceWith.length());
    }

    cout << s << endl; // Print the modified string

    return 0;
}
