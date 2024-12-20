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

    int mx = *max_element(v.begin(), v.end());

    int s_max = INT_MIN;

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (mx == v[i])
        {
            cnt++;
            continue;
        }

        s_max = max(s_max, v[i]);
    }

    if (s_max == INT_MIN or cnt > 1)
        s_max = mx;

    for (int i = 0; i < n; i++)
    {
        if (mx == v[i])
        {

            cout << mx - s_max << " ";
        }
        else
        {
            cout << v[i] - mx << " ";
        }
    }

    newLine;
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