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
    string s;
    cin >> s;

    vector<int> ans(n);

    vector<bool> vis(n, false);

    int c = 1;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            ans[i] = c;
            vis[i] = true;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == s[j] and !vis[j])
            {
                ans[j] = c;
                vis[j] = true;
            }
        }

        if (c == 1)
            c = 0;
        else
            c = 1;
    }

    for (int i = 1; i < ans.size(); i++)
    {
        if (ans[i] == ans[i - 1])
        {
            No;
            return;
        }
    }
    Yes;
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