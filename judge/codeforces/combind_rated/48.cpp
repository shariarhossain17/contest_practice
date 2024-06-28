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

    vector<int> v(s.size(), 0);

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            v[i] = v[i - 1] + 1;
        }
        else
        {
            v[i] = v[i - 1];
        }
    }

    int n;
    cin >> n;

    while (n--)
    {
        int l, r;
        cin >> l >> r;

        cout << v[r - 1] - v[l - 1];
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