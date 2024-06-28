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
    ll x;
    cin >> x;

    string ans;

    while (x)
    {
        ll t = x % 10;
        x /= 10;

        int rem = 9 - t;

        if (rem < t)
        {
            ans += to_string(rem);
        }
        else
        {

            ans += to_string(t);
        }
    }

    reverse(ans.begin(), ans.end());

    if (ans[0] == '0')
        ans[0] = '9';
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}