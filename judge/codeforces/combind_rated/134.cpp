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

bool checkGreater(double a, int b)
{
    return a >= static_cast<double>(b);
}

void solve()
{
    int n, x;
    cin >> n >> x;

    vi v(n);
    array_input_int(v, 0, n);

    sort(v.begin(), v.end());

    int rich = -1;
    ll sum = 0;

    ll cnt = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] >= x)
        {
            sum += v[i];
            rich = i;
            cnt++;
        }
        else
        {
            break;
        }
    }

    if (rich == -1)
    {
        cout << 0 << "\n";
        return;
    }

    ll ans = cnt;

    for (int i = rich - 1; i >= 0; i--)
    {
        sum += v[i];
        cnt++;
        if (checkGreater(static_cast<double>(sum) / cnt, x))
        {
            ans = max(ans, cnt);
        }
        else
        {
            sum -= v[i];
            cnt--;
        }
    }

    cout << ans << endl;
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
