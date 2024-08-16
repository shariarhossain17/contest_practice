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
    ll n, m;
    cin >> n >> m;

    ll participants_per_team = n / m;
    ll remainder = n % m;

    ll min_pairs = remainder * ((participants_per_team + 1) * participants_per_team) / 2 +
                   (m - remainder) * (participants_per_team * (participants_per_team - 1)) / 2;
    ll max_pairs = ((n - (m - 1)) * (n - m)) / 2;

    cout << min_pairs << " " << max_pairs << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}