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
    int n, q;
    cin >> n >> q;
    vi a(n);

    array_input_int(a, 0, n);

    sort(a.begin(), a.end());

    vector<long long> pref(n + 1);
    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + a[i];
    }
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        cout << pref[n - (x - y)] - pref[n - x] << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}