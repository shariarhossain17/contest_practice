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

    ll min_sum = 0;
    ll sum = 0;

    // if (n == 1)
    // {
    //     No;
    //     return;
    // }

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        sum += a;
        if (a == 1)
            min_sum += 2;
        else
            min_sum += 1;
    }

    if (min_sum <= sum && n != 1)
        Yes;
    else
        No;
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