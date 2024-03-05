#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int letter = 0;

    string l_case = '';

    for (char c : s)
    {
        if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9')
        {
            continue;
        }

        l_case += c;
        letter++;
    }

    for (int i = 0; i < (1 << letter); i++)
    {

        for (int j = 0; j < l_case.size(); j++)
        {
        }
    }

    return 0;
}