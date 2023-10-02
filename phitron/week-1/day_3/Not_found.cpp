#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    bool exist[26];

    for (char c : s)
    {
        if (islower(c))
        {
            exist[c - 'a'] = true;
        }
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        if (!exist[i - 'a'])
        {
            cout << i;
            return 0;
                }
    }

    cout << "None";
    return 0;
}