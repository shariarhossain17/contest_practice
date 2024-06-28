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
    int n, k;
    cin >> n >> k;

    vi v(n);

    array_input_int(v, 0, n);

    int sum = 0;
    int ans = -1;
    int mn_sum = INT_MAX;

    int i = 0, j = 0;

    while (j < n)
    {
        sum += v[j];

        if (j >= k - 1)
        {
            if (mn_sum > sum)
            {
                ans = i;
            }
            mn_sum = min(mn_sum, sum);
            sum -= v[i];
            i++;
        }
        j++;
    }

    cout << ans + 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}