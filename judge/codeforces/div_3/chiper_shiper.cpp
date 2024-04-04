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

    int l = 0;
    int r = 1;

    char c = s[r - 1];

    string ans = "";

    while (r < n)
    {

        if (c == s[r])
        {
            ans += s[r];

            c = s[r + 1];
            r = r + 1;
        }
        r++;
    }

    cout << ans;
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