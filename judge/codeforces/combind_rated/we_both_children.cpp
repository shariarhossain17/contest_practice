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
    vector<ll> cnt(n + 1, 0), mx(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x <= n)
            ++cnt[x];
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i; j <= n; j += i)
            mx[j] += cnt[i];
    }
    cout << *max_element(mx.begin(), mx.end()) << "\n";
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