#include <iostream>
#include <string>
using namespace std;

string isLucky(const string &ticket)
{
    int firstSum = 0;
    int lastSum = 0;

    for (int i = 0; i < 3; i++)
    {
        firstSum += ticket[i] - '0';
        lastSum += ticket[i + 3] - '0';
    }

    if (firstSum == lastSum)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string ticket;
        cin >> ticket;

        string result = isLucky(ticket);
        cout << result << endl;
    }

    return 0;
}
