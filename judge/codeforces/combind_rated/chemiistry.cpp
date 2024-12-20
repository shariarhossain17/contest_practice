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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    map<char, int> mp;

    for (int i = 0; i < n; i++)
        mp[s[i] - 'a']++;

    int odd = 0;

    for (auto i : mp)
        if (i.second % 2)
            odd++;

    if (odd > k + 1)
    {
        No;
    }
    else
    {
        Yes;
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
