#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    char c1, c2;

    int cnt1 = 0, cnt2 = 0;

    for (char c : s1)
    {
        if (c == 'X')
        {
            cnt1++;
        }
        else
        {
            c1 = c;
        }
    }
    for (char c : s2)
    {
        if (c == 'X')
        {
            cnt2++;
        }
        else
        {
            c2 = c;
        }
    }

    if (c1 == c2)
    {
        if (cnt1 == cnt2 || c1 == 'M')
        {
            cout << "=\n";
            return;
        }

        else if (c1 == 'S')
        {
            if (cnt1 > cnt2)
            {
                cout << "<\n";
                return;
            }
            else
            {
                cout << ">\n";
            }
        }
        else if (c1 == 'L')
        {
            if (cnt1 > cnt2)
            {
                cout << ">\n";
            }
            else
            {
                cout << "<\n";
            }
        }

        return;
    }
    if (c1 == 'S')
    {
        cout << "<" << endl;
    }
    else if (c1 == 'M' && c2 == 'S')
    {
        cout << ">" << endl;
    }
    else if (c1 == 'M' && c2 == 'L')
    {
        cout << "<" << endl;
    }
    else if (c1 == 'L')
    {
        cout << ">" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}