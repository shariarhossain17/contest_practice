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
    int k;
    cin >> k;
    vector<int> v(12);
    int s = 0;

    for (int i = 0; i < 12; i++)
    {
        cin >> v[i];

        s += v[i];
    }

    if (k == 0)
    {
        cout << 0;
        return;
    }

    sort(v.begin(), v.end());

    int ts = 0;

    int cnt = 0;

    for (int i = v.size() - 1; i >= 0; i--)
    {
        cnt++;
        ts += v[i];
        if (ts >= k)
        {
            cout << cnt;
            break;
        }
    }

    if (k > s)
        cout << -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}