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
    int n, m;
    cin >> n >> m;

    vi v(n);
    array_input_int(v, 0, n);

    vi distinct_count(n, 0);
    set<int> s;

    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(v[i]);
        distinct_count[i] = s.size();
    }

    while (m--)
    {
        int l;
        cin >> l;
        cout << distinct_count[l - 1] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
