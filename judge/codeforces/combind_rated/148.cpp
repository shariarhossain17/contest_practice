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

    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    unordered_set<string> st(v.begin(), v.end());
    string ans = "";

    for (const string &s : v)
    {
        bool found = false;
        for (int i = 1; i < s.size(); i++)
        {
            string left = s.substr(0, i);
            string right = s.substr(i);
            if (st.count(left) && st.count(right))
            {
                found = true;
                break;
            }
        }
        ans += found ? '1' : '0';
    }

    cout << ans << endl;
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
