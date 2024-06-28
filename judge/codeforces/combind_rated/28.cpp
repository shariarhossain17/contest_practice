#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Yes cout << "YES\n"
#define No cout << "NO\n"

void solve()
{
    ll s, n;
    cin >> s >> n;

    vector<pair<int, int>> d(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> d[i].first >> d[i].second;
    }

    sort(d.begin(), d.end());

    bool canDefeat = true;

    for (int i = 0; i < n; ++i)
    {
        if (s > d[i].first)
        {
            s += d[i].second;
        }
        else
        {
            canDefeat = false;
            break;
        }
    }

    if (canDefeat)
        Yes;
    else
        No;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
