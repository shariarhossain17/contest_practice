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

#define FOR(a, o, n)            \
    for (int i = o; i < n; i++) \
    {                           \
    }

void solve()
{
    int n;
    cin >> n;
    vi v(n);

    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (v[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    if (even % 2 == 0 and odd % 2 == 0)
        Yes;
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(v[i] - v[j]) == 1)
                {
                    Yes;
                    return;
                }
            }
        }
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