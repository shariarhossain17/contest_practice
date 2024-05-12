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
    vector<int> vec(n);

    set<int> s;

    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        s.insert(vec[i]);

        mx = max(mx, vec[i]);
    }

    int id = -1;

    for (int i = 0; i < n; i++)
    {
        if (vec[i] != mx)
            continue;

        if (i > 0 && vec[i - 1] < vec[i])
            id = i + 1;
        if (i < n - 1 && vec[i + 1] < vec[i])
            id = i + 1;
    }

    if (s.size() == 1)
        cout << -1 << "\n";
    else
        cout << id << "\n";
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