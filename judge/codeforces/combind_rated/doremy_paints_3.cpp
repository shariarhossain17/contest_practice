#include <bits/stdc++.h>
using namespace std;

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

    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[v[i]]++;
    }

    if (freq.size() == 1 or n == 2)
    {
        Yes;
        return;
    }

    if (freq.size() > 2)
    {
        No;
        return;
    }

    vector<int> counts;
    for (auto it : freq)
    {
        counts.pb(it.second);
    }

    sort(counts.begin(), counts.end());
    if (n % 2 == 0)
    {
        if (counts[0] % 2 == 0 && counts[1] % 2 == 0)
        {
            Yes;
        }
        else
        {
            No;
        }
    }

    else
    {
        if (counts[1] - counts[0] == 1)
        {
            Yes;
        }
        else
        {
            No;
        }
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
