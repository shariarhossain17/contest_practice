#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int ans = 0;

    char start = '1';

    if (s[0] == '0' && s[1] == '0' && s[2] == '0' && s[3] == '0')
    {
        ans += 9;
    }

    else
    {

        for (char c : s)
        {

            if (c == '0')
            {

                if (start == '2')
                {
                    ans += abs(c - '8');

                    start = c;
                }
                else
                {
                    ans += abs(c - '9');

                    start = c;
                }
            }
            else if (start == '0')
            {
                ans += abs(c - '9') + 1;

                start = c;
            }
            else
            {
                ans += abs(c - start);
                start = c;
            }
        }
    }

    cout << ans + s.size() << endl;
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
