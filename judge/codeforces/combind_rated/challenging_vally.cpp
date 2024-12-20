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
    vi v(n);
    array_input_int(v, 0, n);

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int l = i;
        int r = i + 1;

        while (r < n && v[l] == v[r])
        {
            r++;
        }
        if ((l == 0 || v[l - 1] > v[l]) && (r == n || v[r] > v[l]))
        {
            cnt++;
        }

        i = r - 1;
    }

    if (cnt == 1)
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