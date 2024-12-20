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
    int n, m;
    cin >> n >> m;

    vi a1(n), a2(m);

    array_input_int(a1, 0, n);
    array_input_int(a2, 0, m);

    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());

    int i1 = 0, j1 = n - 1, i2 = 0, j2 = m - 1;
    ll ans = 0;

    while (i1 <= j1)
    {
        int d1 = max(abs(a1[i1] - a2[i2]), abs(a1[i1] - a2[j2]));
        int d2 = max(abs(a1[j1] - a2[j2]), abs(a1[j1] - a2[i2]));

        int d = max(d1, d2);
        ans += d;

        if (d == abs(a1[i1] - a2[i2]))
        {
            i1++;
            i2++;
        }
        else if (d == abs(a1[i1] - a2[j2]))
        {
            i1++;
            j2--;
        }
        else if (d == abs(a1[j1] - a2[j2]))
        {
            j1--;
            j2--;
        }
        else
        {
            i2++;
            j1--;
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
