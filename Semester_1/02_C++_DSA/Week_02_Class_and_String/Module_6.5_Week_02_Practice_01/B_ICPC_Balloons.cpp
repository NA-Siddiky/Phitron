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

        unordered_map<char, int> solved_problems;
        int balloons = 0;
        int first_solved = 0;

        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            if (solved_problems[c] == 0)
            {
                solved_problems[c] = 1;
                balloons++;
                if (i == first_solved)
                {
                    balloons++;
                    first_solved++;
                }
            }
        }

        cout << balloons << endl;
    }

    return 0;
}
