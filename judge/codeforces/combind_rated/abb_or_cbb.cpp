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

    int c = 0, sum = 0, mn = INT_MAX;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
            c++;

        else
        {
            sum += c;
            mn = min(c, mn);

            c = 0;
        }
    }

    if (c > 0)
    {
        sum += c;
        mn = min(c, mn);

        c = 0;
    }

    if (s[0] == 'B' or s[s.size() - 1] == 'B')
        cout << sum << endl;
    else
        cout << sum - mn << endl;
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