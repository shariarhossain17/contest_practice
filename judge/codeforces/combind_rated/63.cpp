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

int sign(int x)
{
    if (x > 0)
        return 1;
    else
        return -1;
}
void solve()
{

    ll n;

    cin >> n;

    vector<ll> v(n);

    array_input_int(v, 0, n);

    ll mx_sum = 0, pres, j;

    for (int i = 0; i < n; i++)
    {
        pres = v[i];
        j = i;

        while (j < n and sign(v[i]) == sign(v[j]))
        {
            pres = max(pres, v[j]);
            j++;
        }

        mx_sum = mx_sum + pres;

        i = j - 1;
    }

    cout << mx_sum << endl;
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