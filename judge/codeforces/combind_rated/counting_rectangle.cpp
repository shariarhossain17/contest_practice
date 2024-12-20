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
ll arr[1111][1111];
ll prefix[1111][1111];

void solve()
{
    int n, q;
    cin >> n >> q;

    // Clear the arrays before each test case
    memset(arr, 0, sizeof(arr));
    memset(prefix, 0, sizeof(prefix));

    // Input the array and construct arr
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[a][b] += (a * b);
    }

    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            prefix[i][j] = arr[i][j] + prefix[i][j - 1] + prefix[i - 1][j] - prefix[i - 1][j - 1];
        }
    }

    while (q--)
    {
        int h1, w1, h2, w2;
        cin >> h1 >> w1 >> h2 >> w2;

        h1 += 1;
        h2 -= 1;
        w1 += 1;
        w2 -= 1;

        ll ans = prefix[h2][w2] - prefix[h2][w1 - 1] - prefix[h1 - 1][w2] + prefix[h1 - 1][w1 - 1];

        cout << ans << endl;
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
