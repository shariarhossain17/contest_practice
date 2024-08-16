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

    vi v(7);
    int s = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
        s += v[i];
    }

    if (s >= n)
    {
        for (int i = 0; i < 7; i++)
        {
            n -= v[i];

            if (n <= 0)
            {
                cout << i + 1;
                return;
            }
        }
    }
    else
    {

        int ans = 0;
        while (true)
        {
            n -= v[ans];

            if (n <= 0)
                break;

            if (ans == 6)
                ans = -1;
            ans++;
        }

        cout << ans + 1;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}