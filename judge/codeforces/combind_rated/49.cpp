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

    vector<int> start(n), end(n);

    start[0] = 1;
    end[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        start[i] = end[i - 1] + 1;
        end[i] = start[i] + v[i] - 1;
    }

    int q;
    cin >> q;

    while (q--)
    {
        int m;
        cin >> m;

        int l = 0, r = n - 1, ans = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (start[mid] <= m && m <= end[mid])
            {
                ans = mid;
                break;
            }
            else if (m < start[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << ans + 1 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
