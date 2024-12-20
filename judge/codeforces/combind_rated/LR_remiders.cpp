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
    vector<ll> v(n);

    array_input_int(v, 0, n);

    string s;
    cin >> s;

    vector<ll> prefix(n);
    prefix[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * v[i];
    }

    int l = 0, r = n - 1;
    vector<ll> ans;
    ans.push_back(prefix[n - 1] % m);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            l++;
        }
        else
        {
            r--;
        }

        if (l > r)
            break;

        ll result;
        if (l == 0)
        {
            result = prefix[r] % m;
        }
        else
        {
            result = (prefix[r] / prefix[l - 1]) % m;
        }

        ans.push_back(result);
    }

    for (auto a : ans)
        cout << a << " ";
    newLine;
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
