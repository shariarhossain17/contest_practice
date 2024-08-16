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

    vector<int> pos;

    pos.push_back(0);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'R')
            pos.push_back(i + 1);
    }

    pos.push_back(s.size() + 1);

    int mn = INT_MIN;

    for (int i = 0; i < pos.size() - 1; i++)
    {
        mn = max(mn, pos[i + 1] - pos[i]);
    }

    cout << mn << endl;
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
