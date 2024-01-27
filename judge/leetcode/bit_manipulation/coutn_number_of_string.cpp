#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string allowed;
    cin >> allowed;

    vector<string> str;
    int mp = 0, count = 0, constant;

    for (int i = 0; i < 5; i++)
    {
        string a;
        cin >> a;

        str.push_back(a);
    }

    for (int c : allowed)
    {
        mp = mp | (1 << c - 'a');
    }

    for (const string &s : str)
    {
        constant = 1;

        for (char c : s)
        {
            if ((mp & (1 << c - 'a')) == 0)
            {
                constant = 0;
                break;
            }
        }
        count += constant;
    }

    cout << count;

    return 0;
}
