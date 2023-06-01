#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class CustomSort
{
public:
    char c;
    int cnt;
};

bool cmp(CustomSort a, CustomSort b)
{
    if (a.cnt > b.cnt)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    CustomSort fre[26];
    for (int i = 0; i < 26; i++)
    {
        fre[i].c = (i + 'a');
        fre[i].cnt = 0;
    }

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        fre[c - 'a'].cnt++;
    }

    sort(fre, fre + 26, cmp);

    for (int i = 0; i < 26; i++)
    {
        // cout << fre[i].c << " " << fre[i].cnt << endl;
        if (fre[i].cnt > 0)
        {
            // cout << fre[i].c << " " << fre[i].cnt << endl;
            for (int j = 0; j < fre[i].cnt; j++)
            {
                cout << fre[i].c;
            }
        }
    }

    return 0;
}