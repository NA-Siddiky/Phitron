#include <iostream>
using namespace std;
int main()
{
    // int v;
    // cin >> v;
    // switch (v)
    // {
    // case 1:
    //     cout << "One" << endl;
    //     break;
    // case 2:
    //     cout << "Two" << endl;
    //     break;
    // case 3:
    //     cout << "Three" << endl;
    //     break;
    // case 4:
    //     cout << "Four" << endl;
    //     break;
    // case 5:
    //     cout << "Five" << endl;
    //     break;
    // default:
    //     cout << "Didn't maatch" << endl;
    // }

    // char a;
    // cin >> a;
    // switch (a)
    // {
    // case 'a':
    //     cout << "Vowel" << endl;
    //     break;
    // case 'e':
    //     cout << "Vowel" << endl;
    //     break;
    // case 'i':
    //     cout << "Vowel" << endl;
    //     break;
    // case 'o':
    //     cout << "Vowel" << endl;
    //     break;
    // case 'u':
    //     cout << "Vowel" << endl;
    //     break;
    // default:
    //     cout << "Consonant" << endl;
    // }

    int n;
    cin >> n;
    int remaining = n % 2;
    switch (remaining)
    {
    case 0:
        cout << "Even" << endl;
        break;
    default:
        cout << "Odd" << endl;
    }

    return 0;
}