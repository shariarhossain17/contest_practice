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
    ll n;
    cin >> n;

    vi v(n);
    array_input_int(v, 0, n);

    int maxi = v[n - 1];
    int mini = v[n - 1];

    int cnt = 0;

    for (int i = n - 2; i >= 0; i--)
    {

        if (maxi < v[i])
        {
            cnt++;
            maxi = max(maxi, v[i]);
        }
        else if (v[i] > mini)
            cnt++;

        mini = min(mini, v[i]);
    }

    cout << cnt << endl;
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