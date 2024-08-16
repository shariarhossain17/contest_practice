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
    map<char, int> mp;

    int t;
    cin >> t;

    int n = t;
    while (t--)
    {
        string s;
        cin >> s;

        mp[s[0]]++;
    }

    int ans = 0;

    for (auto it : mp)
    {
        if (it.second > 2)
        {
            if (it.second % 2 == 0)
            {
                int first = (it.second / 2);
                int second = it.second - first;

                ans += (first * (first - 1) / 2);
                ans += (second * (second - 1) / 2);
            }
            else
            {
                int first = (it.second / 2) + 1;
                int second = it.second - first;

                ans += (first * (first - 1) / 2);
                ans += (second * (second - 1) / 2);
            }
        }
    }

    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}