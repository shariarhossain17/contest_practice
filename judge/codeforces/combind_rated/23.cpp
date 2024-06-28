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
    string s;
    cin >> s;

    int n = s.size();
    vector<int> prefix(n + 1, 0);

    if (s[0] == s[1])
        prefix[1] = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            prefix[i + 1] = prefix[i] + 1;
        }
        else
        {
            prefix[i + 1] = prefix[i];
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l];
        newLine;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
