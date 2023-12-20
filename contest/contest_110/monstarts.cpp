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

const int mod = 1000000;
vector<bool> is_prime(mod + 1, 1);

void solve()
{
    int n;
    cin >> n;

    int ans = 1e9;
    if (__builtin_popcountll(n + 1) == 1)
        ans = log2(n + 1);

    for (int i = n; i >= 1; i--)
    {
        if (is_prime[i])
        {
            int val = n - i;
            val++;

            if (__builtin_popcountll(val) == 1)
            {
                cout << min(ans, (int)log2(val) + 1);
                newLine;
                return;
            }
        }
    }

    if (ans == 1e9)
        cout << -1 << "\n";
    else
        cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    is_prime[0] = is_prime[1] = 0;

    for (int i = 2; i * i <= mod; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= mod; j += i)
            {
                is_prime[j] = 0;
            }
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
