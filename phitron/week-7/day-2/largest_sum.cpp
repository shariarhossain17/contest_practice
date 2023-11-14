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

    sort(v.begin(), v.end());

    int large = INT_MIN;
    int second_large = 0;

    for (int i = 0; i < n; i++)
    {
        large = max(large, v[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {

        if (v[i] == large)
            continue;
        if (v[i] != v[i - 1])
        {
            second_large = v[i];
            break;
        }
    }

    cout << large + second_large << endl;
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