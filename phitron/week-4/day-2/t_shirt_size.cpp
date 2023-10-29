#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    char c1, c2;
    int x1 = 0, x2 = 0;

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != 'X')
        {
            c1 = s1[i];
        }

        else
            x1++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] != 'X')
        {
            c2 = s2[i];
        }

        else
            x2++;
    }

    if (c1 == c2)
    {
        if (x1 == x2 || c1 == 'M')
        {
            cout << "=\n";
            return;
        }

        else if (c1 == 'S')
        {
            if (x1 > x2)
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
            if (x1 > x2)
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