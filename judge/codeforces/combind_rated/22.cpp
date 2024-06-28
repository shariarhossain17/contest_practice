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
    int n;
    cin >> n;
    map<string, int> mp;
    while (n--)
    {
        string s;
        cin >> s;
        mp[s]++;
    }

    string ans;
    int cnt = 0;

    for (auto it : mp)
    {
        if (it.second > cnt)
        {
            cnt = it.second;
            ans = it.first;
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