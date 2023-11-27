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
    int ans = 1e9;
    for (int i = 'a'; i <= 'z'; i++)
    {
        int l = 0;
        int r = n - 1;
        int cnt = 0;

        while (l <= r)
        {
            if (s[l] != s[r])
            {
                if (s[l] == i)
                {
                    l++;
                    cnt++;
                }
                else if (s[r] == i)
                {
                    r--;
                    cnt++;
                }

                else
                {
                    cnt = 1e9;
                    break;
                }
            }
            else
            {
                l++;
                r--;
            }
        }
        ans = min(ans, cnt);
    }
    if (ans == 1e9)
        cout << "-1\n";
    else
        cout << ans << "\n";
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