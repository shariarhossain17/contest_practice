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
    int n, k, l;
    cin >> n >> k >> l;

    vector<int> v;

    while (n--)
    {
        int mi, li;
        cin >> mi >> li;

        if (l == li)
            v.push_back(mi);
    }

    sort(v.rbegin(), v.rend());

    int result = 0;

    if (v.size() == 0 || k > v.size())
    {
        cout << "-1\n";
        return;
    }

    for (int i = 0; i < k; i++)
    {
        result += v[i];
    }

    if (result == 0)
        cout << "-1\n";
    else
        cout << result << "\n";
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