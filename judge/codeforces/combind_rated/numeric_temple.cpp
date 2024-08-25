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
    vi v(n);

    array_input_int(v, 0, n);

    int k;
    cin >> k;

    bool all_passed = true;

    while (k--)
    {
        string s;
        cin >> s;
        if (s.size() != n)
        {
            No;
            all_passed = false;
            continue;
        }

        map<int, char> mp;
        map<char, int> mp2;

        bool valid = true;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(v[i]) != mp.end())
            {
                if (mp[v[i]] != s[i])
                {
                    valid = false;
                    break;
                }
            }
            if (mp2.find(s[i]) != mp2.end())
            {
                if (mp2[s[i]] != v[i])
                {
                    valid = false;
                    break;
                }
            }

            mp[v[i]] = s[i];
            mp2[s[i]] = v[i];
        }

        if (valid)
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
