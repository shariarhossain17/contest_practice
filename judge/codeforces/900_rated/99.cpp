#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define newLine cout << "\n"
#define pb push_back
#define vl vector<ll>
#define Yes cout << "YES\n"
#define No cout << "NO\n"
#define array_input_ll(a, o, n) \
    for (int i = o; i < n; i++) \
    {                           \
        cin >> (a[i]);          \
    }

void solve()
{
    ll n, m;
    cin >> n >> m;

    vl v(n);
    array_input_ll(v, 0, n);

    vl forward_diff(n, 0), backward_diff(n, 0);

    for (int i = 1; i < n; i++)
    {
        forward_diff[i] = forward_diff[i - 1];
        if (v[i - 1] > v[i])
        {
            forward_diff[i] += abs(v[i - 1] - v[i]);
        }
    }

    for (int i = n - 2; i >= 0; i--)
    {
        backward_diff[i] = backward_diff[i + 1];
        if (v[i + 1] > v[i])
        {
            backward_diff[i] += abs(v[i + 1] - v[i]);
        }
    }

    while (m--)
    {
        ll si, sj;
        cin >> si >> sj;

        ll d = 0;

        if (si < sj)
        {
            d = forward_diff[sj - 1] - forward_diff[si - 1];
        }
        else
        {
            d = backward_diff[sj - 1] - backward_diff[si - 1];
        }
        cout << d << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
