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
    int n, t;
    cin >> n >> t;

    vi a(n);
    vi h(n);
    array_input_int(a, 0, n);
    array_input_int(h, 0, n);

    int i = 0, j = 0;
    int val = 0;
    int ans = 0;

    while (j < n)
    {
        val += a[j];
        while (val > t)
        {
            val -= a[i];
            i++;
        }

        if (j > i && h[j - 1] % h[j] != 0)
        {

            val = a[j];
            i = j;
        }

        ans = max(ans, j - i + 1);

        j++;
    }

    cout << ans << endl;
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
