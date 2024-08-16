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

    sort(v.begin(), v.end(), greater<int>());

    vector<bool> marked(n + 1, false);

    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        while (x > 0 && x > n || marked[x])
        {
            x /= 2;
        }
        if (x > 0)
        {
            marked[x] = true;
        }
    }

    bool possible = true;
    for (int i = 1; i <= n; i++)
    {
        if (!marked[i])
        {
            possible = false;
            break;
        }
    }

    if (possible)
    {
        Yes;
    }
    else
    {
        No;
    }
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
