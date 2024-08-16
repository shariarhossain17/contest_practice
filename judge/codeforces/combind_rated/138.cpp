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

    string s;
    cin >> s;

    if (k == 1 and s[0] == 'B')
    {
        cout << "0\n";
        return;
    }

    int i = 0, j = 0;

    int mx = INT_MIN;
    int cnt = 0;
    int bl = 0;
    int ans = INT_MIN;

    while (j < n)
    {

        if (s[j] == 'W')
        {
            cnt++;
        }

        else
            bl++;

        if (j >= k - 1)
        {
            if (s[i - 1] == 'W')
                cnt--;
            if (max(bl, mx) > mx)
            {
                ans = (ans, cnt);
                mx = max(bl, mx);
            }

            if (s[i] == 'B')
                bl--;

            i++;
        }

        j++;
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