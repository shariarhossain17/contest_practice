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

void solve()
{
    string s;
    cin >> s;

    int cnt = 0;

    if (is_sorted(s.begin(), s.end()))
    {
        cout << 1 << "\n";
        return;
    }

    if (s[0] == '1' and s[1] == '0' and s.size() == 2)
    {
        cout << 2 << endl;
        return;
    }

    int i = 0;

    while (i < s.size() - 1)
    {
        if (s[i] == s[i + 1])
            i++;
        else
        {
            cnt++;
            i++;
        }
    }

    cout << cnt + 1 / 2 << endl;
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
