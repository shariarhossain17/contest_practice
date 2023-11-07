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

    if (count(s.begin(), s.end(), '?') == n)
    {
        cout << n << endl;
        return;
    }

    if (count(s.begin(), s.end(), '1') == 0)
    {
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans++;
            if (s[i] == '0')
                break;
        }
        cout << ans << endl;
        return;
    }

    int last_zero = -1;
    int ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            last_zero = i;
        }
        else
        {
            if (s[i] == '1')
            {
                if (last_zero == -1)
                {
                    ans = n - i;
                    break;
                }
                else
                {
                    ans = last_zero - i + 1;
                    break;
                }
            }
        }
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