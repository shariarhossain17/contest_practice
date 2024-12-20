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
    string s;
    cin >> s;

    reverse(s.begin(), s.end());

    vector<ll> v1;

    // v1.push_back(0);

    ll zero = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            v1.push_back(i - v1.size());
            zero++;
        }
    }

    vector<ll> v2(v1.size() + 1, 0);

    for (int i = 1; i <= v1.size(); i++)
        v2[i] = v2[i - 1] + v1[i - 1];

    for (int i = 1; i < v2.size(); i++)
        cout << v2[i] << " ";
    for (int i = 0; i < abs(n - zero); i++)
        cout << "-1" << " ";

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