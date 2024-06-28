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

    vector<string> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<char> sub(m, '0');

    for (int i = 0; i < n; i++)
    {

        string s1 = v[i];

        for (int j = 0; j < s1.size(); j++)
        {
            if (sub[j] - '0' < s1[j] - '0')
            {
                sub[j] = s1[j];
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        string s2 = v[i];

        int cnt = 0;

        for (int j = 0; j < s2.size(); j++)
        {
            if (s2[j] - '0' >= sub[j] - '0')
            {
                cnt++;
            }
        }

        if (cnt > 0)
            ans++;
    }

    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}