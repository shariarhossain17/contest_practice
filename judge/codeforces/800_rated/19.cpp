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

    ll sum = 0;

    bool odd = false, even = false;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        sum += a;

        if (a % 2 == 0)
            even = true;
        else
            odd = true;
    }

    if (sum % 2 == 1 || (odd && even))
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