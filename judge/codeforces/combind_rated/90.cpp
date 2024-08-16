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

    vi v(n);
    array_input_int(v, 0, n);

    int rem = 0, day = 0;

    for (int i = 0; i < n; i++)
    {
        rem += v[i];
        day++;

        int take = min(8, rem);
        k -= take;
        rem -= take;

        if (k <= 0)
        {
            cout << day;
            return;
        }
    }

    cout << -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
