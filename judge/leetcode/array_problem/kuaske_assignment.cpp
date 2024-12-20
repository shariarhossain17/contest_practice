#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <unordered_map>
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
    vi a(n);

    array_input_int(a, 0, n);

    vector<bool> vis(n, false);

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            int cur = i;
            int c = 0;
            do
            {
                vis[cur] = true;
                cur = a[cur] - 1;
                c++;
            } while (!vis[cur]);

            if (c > 0)
            {
                ans.push_back(c);
            }
        }
    }

    int total = 0;

    for (auto i : ans)
        total += (i - 1) / 2;

    cout << total << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}