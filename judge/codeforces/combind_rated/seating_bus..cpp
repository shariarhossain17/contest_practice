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

    vector<bool> checked(n + 1, false);

    checked[v[0]] = true;

    for (int i = 1; i < n; i++)
    {
        int current = v[i];
        int previous = v[i - 1];

        if (abs(current - previous) == 1)
        {
            checked[current] = true;
        }
        else if (!checked[current - 1] && !checked[current + 1])
        {
            No;
            return;
        }
        checked[current] = true;
    }

    Yes;
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
