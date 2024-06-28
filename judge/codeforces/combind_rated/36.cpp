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
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    bool f = false;

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i].second > v[i + 1].second)
        {
            f = true;
            break;
        }
    }

    if (f)
        cout << "Happy Alex";
    else
        cout << "Poor Alex";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}