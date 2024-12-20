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

    char ar[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> ar[i][j];
    }

    int operation = 0;

    for (int layer = 0; layer < n / 2; layer++)
    {
        for (int i = 0; i < n - 2 * layer - 1; i++)
        {
            vector<int> v;
            int a = ar[layer][layer + i] - 'a';
            int b = ar[layer + i][n - layer - 1] - 'a';
            int c = ar[n - layer - 1][n - layer - 1 - i] - 'a';
            int d = ar[n - layer - 1 - i][layer] - 'a';

            v.pb(a);
            v.pb(b);
            v.pb(c);
            v.pb(d);

            sort(v.begin(), v.end());

            int mx = v[v.size() - 1];

            for (int i = 0; i < v.size(); i++)
                operation += (mx - v[i]);
        }
    }

    cout << operation << endl;
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
