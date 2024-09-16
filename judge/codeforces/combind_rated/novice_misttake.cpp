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

    vector<pair<int, int>> results;

    string s;

    for (int i = 1; i <= 10000; ++i)
    {
        s += to_string(n);

        for (int j = max(1, static_cast<int>(s.length()) - 6);
             j <= min(10000, 10000 * i) && j < static_cast<int>(s.length()); ++j)
        {

            if (s.substr(0, s.length() - j) == to_string(n * i - j))
            {
                results.push_back({i, j});
            }
        }
    }

    cout << results.size() << "\n";
    for (auto &result : results)
    {
        cout << result.first << " " << result.second << "\n";
    }
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
