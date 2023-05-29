#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int balloons = 0;
        unordered_map<char, int> solved_problems;
        bool first_solved = false;

        for (char c : s)
        {
            if (solved_problems.find(c) == solved_problems.end())
            {
                solved_problems[c] = 1;
                balloons++;
                if (!first_solved)
                {
                    balloons++;
                    first_solved = true;
                }
            }
        }

        cout << balloons << endl;
    }

    return 0;
}
