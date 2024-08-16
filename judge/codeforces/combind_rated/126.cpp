#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define vi vector<int>
#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define array_input_int(a, o, n) \
    for (int i = o; i < n; i++)  \
    {                            \
        cin >> (a[i]);           \
    }

bool isSame(string &s)
{
    for (int i = 1; i < s.size(); i++)
    {
        if (s[0] != s[i])
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<string> segments;
    string last;

    last += s[0];
    segments.pb(last);
    int i;
    for (i = 1; i < n; i++)
    {
        string cur;
        cur += s[i];
        if (stoll(last) < stoll(cur))
        {
            segments.pb(cur);
            last = cur;
        }
        else
        {
            while (i < n && stoll(last) >= stoll(cur))
            {
                cur += s[++i];
            }
            if (i < n)
            {
                segments.pb(cur);
                last = cur;
            }
        }
    }

    cout << i << endl;

    if (segments.size() < 2)
    {
        No;
    }
    else
    {
        Yes;
        cout << segments.size() << "\n";
        for (const auto &segment : segments)
        {
            cout << segment << " ";
        }
        while (i < n)
        {
            cout << s[i];
            i++;
        }

        newLine;
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
