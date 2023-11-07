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

// // 1
// 5 1 WWWBB

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;

    cin >> s;

    int cnt = 0;

    queue<char> q;

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
            cnt++;
        q.push(s[i]);

        while (q.size() > k)
        {
            cnt -= (q.front() == 'W');
            q.pop();
        }

        if (q.size() == k)
        {
            ans = min(ans, cnt);
        }
    }

    cout << ans;
    newLine;
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