#include <iostream>
#include <string>
using namespace std;

int countWords(const string &str)
{
    int wordCount = 0;
    bool inWord = false;

    for (char ch : str)
    {
        if (isalpha(ch))
        {
            if (!inWord)
            {
                inWord = true;
                wordCount++;
            }
        }
        else
        {
            inWord = false;
        }
    }

    return wordCount;
}

int main()
{
    string str;
    getline(cin, str);

    int result = countWords(str);
    cout << result << endl;

    return 0;
}
