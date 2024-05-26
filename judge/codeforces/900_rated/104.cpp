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
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v;

    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        cnt++;
        v.push_back(cnt);
        if (cnt == m)
            cnt = 0;
    }

    for (int i = 0; i <= v.size(); i++)
    {
        if (k == 0)
            break;
        if (v[i] > 1)
        {
            v[i] = 1;
            k--;
        }
    }

    reverse(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > 1)
        {
            Yes;
            return;
        }
    }
    No;
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