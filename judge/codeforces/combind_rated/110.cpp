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

    vi cola(n);
    vi cans(n);

    array_input_int(cola, 0, n);
    array_input_int(cans, 0, n);

    ll s = 0;

    for (int i = 0; i < n; i++)
        s += cola[i];

    sort(cans.begin(), cans.end());

    ll rem = cans[n - 1] + cans[n - 2];

    if (s <= rem)
        Yes;
    else
        No;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}