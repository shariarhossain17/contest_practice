#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array_input_int(a, o, n) \
    for (int i = o; i < n; i++)  \
    {                            \
        cin >> (a[i]);           \
    }

void solve()
{
    int n, required;
    cin >> n >> required;

    vector<int> s(n);
    array_input_int(s, 0, n);

    int ans = n + 1;
    int cur = 0;

    for (int i = 0, j = 0; i < n; i++)
    {
        while (j < n && cur + s[j] <= required)
        {
            cur += s[j];
            j++;
        }
        if (cur == required)
            ans = min(ans, n - (j - i));

        cur -= s[i];
    }

    if (ans > n)
        ans = -1;

    cout << ans << "\n";
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
