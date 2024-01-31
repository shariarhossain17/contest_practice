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

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    set<pair<int, int>> pairs;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            int ai = v[i];
            int aj = v[j];

            if (ai > aj)
            {
                swap(ai, aj);
            }
            pairs.insert({ai, aj});
        }
    }

    int cnt = 0;

    for (auto it : pairs)
    {
        // cout << it.first << " " << it.second << endl;
        int x = it.first;
        int y = it.second;

        cout << (x & y) << " " << (x ^ y) << endl;

        // if ((x & y) >= (x ^ y))
        // {
        //     cnt++;
        // }
    }

    cout << cnt;
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