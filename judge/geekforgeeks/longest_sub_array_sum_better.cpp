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
    int n, k;
    cin >> n >> k;

    vector<int> ar(n);

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    map<int, int> mp;

    long long s = 0;
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        s += ar[i];

        if (s == k)
            idx = max(idx, i + 1);

        int rem = s - k;

        if (mp.find(rem) != mp.end())
        {
            int len = i - mp[rem];
            idx = max(len, idx);
        }

        if (mp.find(s) == mp.end())
        {
            mp[s] = i;
        }
    }

    cout << idx;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}