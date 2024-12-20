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
    string s1, s2;
    cin >> s1 >> s2;

    int same = 0, one = 0, two = 0;

    for (int i = 0; i < n; i++)
    {
        if (s2[i] == '1' and s1[i] == '0')
            same++;

        if (s1[i] == '1')
            one++;
        if (s2[i] == '1')
            two++;
    }

    int ans = 0;

    if (one > two)
    {

        int t = one - two;
        ans += t;

        for (int i = 0; i < n; i++)
        {
            if (s2[i] == '1' and s1[i] != '1')
                ans++;
        }
    }

    else if (two > one)
    {
        ans += two - one;

        ans += abs((two - one) - same);
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s2[i] == '1' and s1[i] != '1')
                ans++;
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